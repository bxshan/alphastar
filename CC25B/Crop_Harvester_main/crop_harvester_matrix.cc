#include <bits/stdc++.h>
using namespace std;

int a2x, a4x, a2y, a4y;
int b2x, b4x, b2y, b4y;

//a u bh
int xmin = -1;
int ymin = -1;
int xmax = -1;
int ymax = -1;
bool f[2001][2001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a4x >> a4y >> a2x >> a2y;
    cin >> b4x >> b4y >> b2x >> b2y;

    a2x += 1000;
    a4x += 1000;
    a2y += 1000;
    a4y += 1000;
    b2x += 1000;
    b4x += 1000;
    b2y += 1000;
    b4y += 1000;
    for (int i = 0; i < 2001; i++) {
      for (int j = 0; j < 2001; j++) {
        f[i][j] = false;
      }
    }

    for (int i = a4x; i < a2x; i++) {
      for (int j = a4y; j < a2y; j++) {
        f[i][j] = true;
      }
    }

    for (int i = b4x; i < b2x; i++) {
      for (int j = b4y; j < b2y; j++) {
        f[i][j] = false;
      }
    }

    bool found = false;
    for (int i = a4x; i < a2x; i++) {
      for (int j = a4y; j < a2y; j++) {
        if (f[i][j]) {
          found = true;

          if (xmin == -1) {
            xmin = i;
          }
          if (ymin == -1) {
            ymin = j;
          }
          if (xmax < i) {
            xmax = i;
          }
          if (ymax < j) {
            ymax = j;
          }
        }
      }
    }

    if (!found) {
      cout << 0;
    } else {
      cout << (xmax-xmin + 1) * (ymax-ymin + 1);
    }

    return 0;
}
