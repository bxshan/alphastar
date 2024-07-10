#include <bits/stdc++.h>
using namespace std;

int N;
int zeros, neg_ones;
int remaining = 0;
bool inconsistent = false;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<int> c(N);
    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }
    c[0] = 0;

    for (int i = N - 1; i > -1; i--) {
        if (remaining == 0) {
            if (c[i] != 0 && c[i] != -1) {
                remaining = c[i];
            }
        } else {
            if (c[i] == -1) {
                c[i] = remaining - 1;
            } else if (c[i] != remaining - 1) {
                inconsistent = true;
            }
            remaining--;
        }
    }

    for (int i = 0; i < N; i++) {
        if (c[i] == 0) {
            zeros++;
        } else if (c[i] == -1) {
            neg_ones++;
        }
    }

    if (!inconsistent) {
        cout << zeros << " " << zeros + neg_ones;
    } else {
        cout << -1;
    }

    return 0;
}