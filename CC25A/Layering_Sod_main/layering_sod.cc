#include <bits/stdc++.h>
using namespace std;

int X, Y, N;
set<pair<int, int>> ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> X >> Y >> N;
    vector<int> s[N];
    for (int i = 0; i < N; i++) {
        s[i].resize(4);
        for (int j = 0; j < 4; j++) {
            cin >> s[i][j];
            s[i][j] -= 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = s[i][0]; j < s[i][2] + 1; j++) {
            for (int k = s[i][1]; k < s[i][3] + 1; k++) {
                ans.insert(make_pair(j, k));
            }
        }
    }

    cout << ans.size();

    return 0;
}
