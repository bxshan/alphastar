#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> c;
vector<int> u;

int mod_bin_search(int val, int start, int end) {
    int l, m, h;
    l = start;
    h = end;

    while (l <= h) {
        m = l + (h - l) / 2;
        if (val >= c[m] && val < c[m + 1]) {
            return m + 1;
        } else if (val < c[m]) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> Q;
    c.resize(N);
    u.resize(Q);

    int cnt = 0;
    int tmp = 0;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        cnt += tmp;
        c[i] = cnt;
    }
    for (int i = 0; i < Q; i++) {
        cin >> u[i];
    }

    for (int i = 0; i < Q; i++) {
        int ans = mod_bin_search(u[i], 0, c.size() - 1);
        cout << ans + 1 << endl;
    }

    return 0;
}