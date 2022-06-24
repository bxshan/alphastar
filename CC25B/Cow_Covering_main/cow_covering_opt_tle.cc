#include <bits/stdc++.h>
using namespace std;

int N;
int curr_area, l, w;
int ans = 40000 * 40000;

struct point {
    int x, y;
};

bool comp_x(point a, point b) { return a.x < b.x; }

bool comp_y(point a, point b) { return a.y < b.y; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<point> c(N);

    for (int i = 0; i < N; i++) {
        cin >> c[i].x >> c[i].y;
    }

    sort(c.begin(), c.end(), comp_x);

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            l = c[N - 1].x - c[1].x;
        } else if (i == N - 1) {
            l = c[N - 2].x - c[0].x;
        } else {
            l = c[N - 1].x - c[0].x;
        }

        auto minmax_ay = minmax_element(c.begin(), c.begin() + i, comp_y);
        auto minmax_by = minmax_element(c.begin() + i + 1, c.end(), comp_y);

        if (i == 0) minmax_ay = minmax_by;
        if (i == N - 1) minmax_by = minmax_ay;

        w = max(minmax_ay.second->y, minmax_by.second->y) -
            min(minmax_ay.first->y, minmax_by.first->y);

        curr_area = l * w;
        if (curr_area < ans) ans = curr_area;
    }

    cout << ans;

    return 0;
}