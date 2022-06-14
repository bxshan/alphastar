#include <bits/stdc++.h>
using namespace std;

int a2x, a2y, a4x, a4y, b2x, b2y, b4x, b4y;
int f2x, f2y, f4x, f4y;
bool f[2001][2001];
int ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a4x >> a4y >> a2x >> a2y;
    cin >> b4x >> b4y >> b2x >> b2y;
    cin >> f4x >> f4y >> f2x >> f2y;
    a2x += 1000; 
    a2y += 1000; 
    a4x += 1000; 
    a4y += 1000;
    b2x += 1000; 
    b2y += 1000; 
    b4x += 1000; 
    b4y += 1000;
    f2x += 1000; 
    f2y += 1000; 
    f4x += 1000; 
    f4y += 1000;

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
        f[i][j] = true;
      }
    }
    for (int i = f4x; i < f2x; i++) {
    	for (int j = f4y; j < f2y; j++) {
        f[i][j] = false;
      }
    }
    for (int i = 0; i < 2001; i++) {
      for (int j = 0; j < 2001; j++) {
				if (f[i][j]) {
					ans++;
				}
      }
    }

		cout << ans;

    return 0;
}
