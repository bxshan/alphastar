#include <bits/stdc++.h>
using namespace std;

int x, y;
int cnt = 0;
int ans = 0;
int curr_x;
int next_x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x >> y;
    curr_x = x;

    while (1) {
        next_x = x + pow(-2, cnt);
        if ((curr_x < y && next_x >= y) || (curr_x > y && next_x <= y)) {
            ans += abs(y - curr_x);
            break;
        } else {
            ans += abs(next_x - curr_x);
        }
        cnt++;
        curr_x = next_x;
    }

    cout << ans;

    return 0;
}
