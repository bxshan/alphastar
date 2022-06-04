#include <bits/stdc++.h>
using namespace std;

int N, ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    vector<int> c(N);
    vector<bool> d(N);
    vector<int> f(N);

    for (int& i : c) cin >> i;
    sort(c.begin(), c.end());

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            d[i] = 1;
        } else if (i == N - 1) {
            d[i] = 0;
        } else if (c[i] - c[i - 1] > c[i + 1] - c[i]) {
            d[i] = 1;
        } else if (c[i] - c[i - 1] <= c[i + 1] - c[i]) {
            d[i] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            if (d[i + 1] == 0) {
                f[i] = 1;
            } else if (d[i + 1] == 1) {
                f[i] = 0;
            }
        } else if (i == N - 1) {
            if (d[i - 1] == 0) {
                f[i] = 0;
            } else if (d[i - 1] == 1) {
                f[i] = 1;
            }
        } else {
            if (d[i - 1] == 1 && d[i + 1] == 0) {
                f[i] = 2;
            } else if ((d[i - 1] == 1 && d[i + 1] != 0) ||
                       (d[i - 1] != 1 && d[i + 1] == 0)) {
                f[i] = 1;
            } else if (d[i - 1] != 1 && d[i + 1] != 0) {
                f[i] = 0;
            }
        }
    }

    for (int i : f) {
        if (i == 0) {
            ans++;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        if (d[i] == 1 && d[i + 1] == 0) {
            if (f[i] == 1 && f[i + 1] == 1) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}
