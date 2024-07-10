#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> c;
vector<int> u;

int bs(int val, int start, int end) {
    int l, m, h;
    l = start;
    h = end;

    while (l <= h) {
        m = l + (h - l) / 2;
        if (val == c[m]) {
            return m;
        } else if (val < c[m]) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> Q;
    c.resize(N);
    u.resize(Q);

    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < Q; i++) {
        cin >> u[i];
    }

    for (int i = 0; i < Q; i++) {
        int pos = bs(u[i], 0, N - 1);

        int new_pos;
        while (true) {
            new_pos = bs(u[i], 0, pos);
            if (new_pos != pos)
                pos = new_pos;
            else
                break;
        }

        cout << pos << endl;
    }
    return 0;
}