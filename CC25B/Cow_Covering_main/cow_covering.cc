#include <bits/stdc++.h>
using namespace std;

int N;
int curr_area, l, w;
int ans = 40000 * 40000;
vector<int> exc(4);
int min_x = 40001, min_y = 40001, max_x = 0, max_y = 0;

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
        if (c[0][i] < min_x) {
            min_x = c[0][i];
            exc[0] = i;
        }
        if (c[0][i] > max_x) {
            max_x = c[0][i];
            exc[1] = i;
        }
        if (c[1][i] < min_y) {
            min_y = c[1][i];
            exc[2] = i;
        }
        if (c[1][i] > max_y) {
            max_y = c[1][i];
            exc[3] = i;
        }
    }

    vector<int>::iterator i = c[0].begin();
    vector<int>::iterator j = c[1].begin();

    for (int k = 0; k < 4; k++) {
        i = c[0].begin() + exc[k];
        j = c[1].begin() + exc[k];

        auto minmax_ax = minmax_element(c[0].begin(), i);
        auto minmax_bx = minmax_element(i + 1, c[0].end());
        if (i == c[0].begin()) minmax_ax = minmax_bx;
        if (i == c[0].end() - 1) minmax_bx = minmax_ax;

        l = max(*minmax_ax.second, *minmax_bx.second) -
            min(*minmax_ax.first, *minmax_bx.first);

        auto minmax_ay = minmax_element(c[1].begin(), j);
        auto minmax_by = minmax_element(j + 1, c[1].end());
        if (j == c[1].begin()) minmax_ay = minmax_by;
        if (j == c[1].end() - 1) minmax_by = minmax_ay;

        w = max(*minmax_ay.second, *minmax_by.second) -
            min(*minmax_ay.first, *minmax_by.first);

        curr_area = l * w;
        if (curr_area < ans) ans = curr_area;
    }

    cout << ans;

    return 0;
}