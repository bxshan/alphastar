#include <bits/stdc++.h>
using namespace std;

int a1x, a2x, a3x, a4x, a1y, a2y, a3y, a4y;
int b1x, b2x, b3x, b4x, b1y, b2y, b3y, b4y;
int pi;

bool point_inside(int px, int py, int x2, int y2, int x4, int y4) {
    if (px < x2 && px > x4 && py < y2 && py > y4) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a4x >> a4y >> a2x >> a2y;
    cin >> b4x >> b4y >> b2x >> b2y;

    a1x = a4x;
    a1y = a2y;
    a3x = a2x;
    a3y = a4y;

    b1x = b4x;
    b1y = b2y;
    b3x = b2x;
    b3y = b4y;

    if (point_inside(b1x, b1y, a2x, a2y, a4x, a4y)) {
        pi++;
    }
    if (point_inside(b2x, b2y, a2x, a2y, a4x, a4y)) {
        pi++;
    }
    if (point_inside(b3x, b3y, a2x, a2y, a4x, a4y)) {
        pi++;
    }
    if (point_inside(b4x, b4y, a2x, a2y, a4x, a4y)) {
        pi++;
    }

    if (pi == 1 || pi == 2 || pi == 4) {
        cout << (a2x - a4x) * (a2y - a4y);
    } else if (pi == 0) {
        pi = 0;
        if (point_inside(a1x, a1y, b2x, b2y, b4x, b4y)) {
            pi++;
        }
        if (point_inside(a2x, a2y, b2x, b2y, b4x, b4y)) {
            pi++;
        }
        if (point_inside(a3x, a3y, b2x, b2y, b4x, b4y)) {
            pi++;
        }
        if (point_inside(a4x, a4y, b2x, b2y, b4x, b4y)) {
            pi++;
        }

        if (pi == 0) {
            cout << (a2x - a4x) * (a2y - a4y);
        } else if (pi == 2) {
            if (b4x <= a2x && b4x >= a4x) {
                cout << (b4x - a4x) * (a2y - a4y);
            } else if (b2x <= a2x && b2x >= a4x) {
                cout << (a2x - b2x) * (a2y - a4y);
            } else if (b4y <= a2y && b4y >= a4y) {
                cout << (a2x - a4x) * (b4y - a4y);
            } else if (b2y <= a2y && b2y >= a4y) {
                cout << (a2x - a4x) * (a2y - a4y);
            }
        } else if (pi == 4) {
            cout << 0;
        }
    }

    return 0;
}
