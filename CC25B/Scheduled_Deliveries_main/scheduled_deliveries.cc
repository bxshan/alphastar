#include <bits/stdc++.h>
using namespace std;

int N;
int curr;
int ans;

bool divisible = false;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<int> d;

    cin >> curr;

    for (int i = 0; i < N - 1; i++) {
        cin >> curr;
        curr--;
        divisible = false;

        for (int i = 0; i < d.size(); i++) {
            if (curr % d[i] == 0) {
                divisible = true;
                break;
            }
        }

        if (!divisible) {
            d.push_back(curr);
            ans++;
        }
    }

    cout << ans;

    return 0;
}