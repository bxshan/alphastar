#include <bits/stdc++.h>
using namespace std;

int N, d, t;

bool is_ly(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int num_days(int y, int m) {
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 2:
            if (is_ly(y)) {
                return 29;
            } else {
                return 28;
            }
            break;
    }
    return 0;
}

// 337

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    d = 0;

    vector<int> a(7);

    for (int i = 0; i < 7; i++) {
        a[i] = 0;
    }

    for (int i = 1900; i < 1900 + N; i++) {
        for (int j = 1; j <= 12; j++) {
            t = d + 13;
            a[(t + 1) % 7]++;
            d += num_days(i, j);
        }
    }

    for (int i : a) {
        cout << i << " ";
    }

    return 0;
}
