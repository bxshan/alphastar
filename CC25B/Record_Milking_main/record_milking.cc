#include <bits/stdc++.h>
using namespace std;

int N, M;
int max_val = 0;
int arr_diff;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    vector<int> r(100);
    vector<int> b(100);

    int r_index = 0;
    for (int i = 0; i < N; i++) {
        int r_duration, r_rate;

        cin >> r_duration >> r_rate;
        while (r_duration > 0) {
            r[r_index] = r_rate;
            r_index++;
            r_duration--;
        }
    }

    int b_index = 0;
    for (int i = 0; i < M; i++) {
        int b_duration, b_rate;

        cin >> b_duration >> b_rate;
        while (b_duration > 0) {
            b[b_index] = b_rate;
            b_index++;
            b_duration--;
        }
    }

    for (int i = 0; i < 100; i++) {
        arr_diff = b[i] - r[i];
        max_val = max(arr_diff, max_val);
    }

    cout << max_val;

    return 0;
}