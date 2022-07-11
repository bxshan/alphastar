#include <bits/stdc++.h>
using namespace std;

int N, S;
vector<int> t;

int mod_bin_search(int val, int start, int end) {
    int l, m, h;
    l = start;
    h = end;

    while (l < h) {
        m = l + (h - l) / 2;
        if (val + t[m] > S) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    if (val + t[l] <= S) {
        return l;
    } else {
        return l - 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> S;
    t.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    sort(t.begin(), t.end());
    int cnt = 0;

    for (int i = 0; i < t.size() - 2; i++) {
        cnt += mod_bin_search(t[i], i + 1, t.size() - 1) - i;
    }

    cout << cnt;

    return 0;
}