#include <bits/stdc++.h>
using namespace std;

int N, Q;
int cnt = 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> Q;

    vector<int> b(N);
    vector<int> t(Q);

    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < Q; i++) {
        cin >> t[i];
    }

    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < N; j++) {
            if (b[j] <= t[i]) {
                t[i] -= b[j];
                cnt++;
            } else {
                cout << cnt << endl;
                cnt = 1;
                break;
            }
        }
    }

    return 0;
}