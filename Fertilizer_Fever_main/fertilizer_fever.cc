#include <bits/stdc++.h>
using namespace std;

int N, M, F, S;
vector<int> bad_fields;
set<int> output;
set<int> cows;

bool comp(const vector<int>& a, const vector<int>& b) { return a[2] < b[2]; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> F >> S;
    vector<int> sick[M];

    // cow field time
    vector<vector<int>> f(F);
    // cow time
    vector<int> s[S];

    for (int i = 0; i < F; i++) {
        f[i].resize(3);
        cin >> f[i][0] >> f[i][1] >> f[i][2];
    }

    for (int i = 0; i < S; i++) {
        s[i].resize(2);
        cin >> s[i][0] >> s[i][1];
    }

    for (int m = 1; m <= M; m++) {
        cows.clear();
        for (int i = 0; i < F; i++) {
            for (int j = 0; j < S; j++) {
                if (f[i][1] == m) {
                    if (f[i][0] == s[j][0] && f[i][2] < s[j][1]) {
                        cows.insert(f[i][0]);
                    }
                }
            }
        }
        if (cows.size() == S) bad_fields.push_back(m);
    }

    for (int i = 0; i < F; i++) {
        for (int j = 0; j < bad_fields.size(); j++) {
            if (f[i][1] == bad_fields[j]) {
                output.insert(f[i][0]);
            }
        }
    }

    cout << output.size();

    return 0;
}
