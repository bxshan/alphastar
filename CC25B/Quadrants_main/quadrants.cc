#include <bits/stdc++.h>
using namespace std;

int N, B;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> B;
    int c[N][2];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> c[i][j];
        }
    }

    int min_of_max = N + 1;
    int curr_max, px, py, q1, q2, q3, q4;

    for (int x = 0; x < N; x++) {
        px = c[x][0] + 1;
        for (int y = 0; y < N; y++) {
            py = c[y][1] + 1;
            q1 = 0;
            q2 = 0;
            q3 = 0;
            q4 = 0;
            for (int l = 0; l < N; l++) {
                if (c[l][0] > px && c[l][1] > py) {  // Q1
                    q1++;
                } else if (c[l][0] < px && c[l][1] > py) {  // Q2
                    q2++;
                } else if (c[l][0] < px && c[l][1] < py) {  // Q3
                    q3++;
                } else if (c[l][0] > px && c[l][1] < py) {  // Q4
                    q4++;
                }
            }
            curr_max = max(max(q1, q2), max(q3, q4));
            if (curr_max < min_of_max) {
                min_of_max = curr_max;
            }
        }
    }

    cout << min_of_max;

    return 0;
}