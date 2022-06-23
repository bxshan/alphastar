#include <bits/stdc++.h>
using namespace std;

int N;
int curr_area, l, w;
int ans = 40000 * 40000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<vector<int>> c(2);
    c[0].resize(N);
    c[1].resize(N);

    for (int i = 0; i < N; i++) {
        cin >> c[0][i] >> c[1][i];
    }

    for (int i = 0; i < N; i++) {
        cout << " === " << c[0][i] << " " << c[1][i] << endl;
    }

    vector<int>::iterator i = c[0].begin();
    vector<int>::iterator j = c[1].begin();

    for (; i != c[0].end();) {
        auto minmax_ax = minmax_element(c[0].begin(), i);
        auto minmax_bx = minmax_element(i + 1, c[0].end());
        if (i == c[0].begin()) minmax_ax = minmax_bx;
        if (i == c[0].end() - 1) minmax_bx = minmax_ax;

        cout << " ??? " << *minmax_ax.first << " : " << *minmax_ax.second
             << endl;
        cout << " ??? " << *minmax_bx.first << " : " << *minmax_bx.second
             << endl;
        l = max(*minmax_ax.second, *minmax_bx.second) -
            min(*minmax_ax.first, *minmax_bx.first);

        auto minmax_ay = minmax_element(c[1].begin(), j);
        auto minmax_by = minmax_element(j + 1, c[1].end());
        if (j == c[1].begin()) minmax_ay = minmax_by;
        if (j == c[1].end() - 1) minmax_by = minmax_ay;

        cout << " ??? " << *minmax_ay.first << " : " << *minmax_ay.second
             << endl;
        cout << " ??? " << *minmax_by.first << " : " << *minmax_by.second
             << endl;
        w = max(*minmax_ay.second, *minmax_by.second) -
            min(*minmax_ay.first, *minmax_by.first);

        cout << l << " " << w << " " << l * w << endl;

        curr_area = l * w;
        if (curr_area < ans) ans = curr_area;

        ++i;
        ++j;
    }

    cout << ans;

    return 0;
}