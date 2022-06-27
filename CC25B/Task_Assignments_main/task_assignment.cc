#include <bits/stdc++.h>
using namespace std;

int N, T;
int ans = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> T;
    vector<int> start(T);
    vector<int> skip(T);
    vector<bool> c(N);

    for (int i = 0; i < T; i++) {
        cin >> start[i] >> skip[i];
    }
    for (int i = 0; i < N; i++) {
        c[i] = false;
    }

    for (int i = 0; i < T; i++) {
        for (int j = start[i] - 1; j < N; j += skip[i]) {
            c[j] = true;
        }
    }

    for (int i = 0; i < N; i++) {
        if (!c[i]) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}