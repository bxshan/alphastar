#include <bits/stdc++.h>
using namespace std;

int N, M;
//                 A    C    G    T
vector<bool> used{true, true, true, true};

int main() {
  cin >> N >> M;

  vector<string> black(N);
  vector<string> brown(N);

  for (int i = 0; i < 2; i++) {
    if (i == 0) {
      for (int j = 0; j < N; j++) {
        cin >> black[j];
      }
    } else {
      for (int j = 0; j < N; j++) {
        cin >> brown[j];
      }
    }
  }
  int count = 0;
  for (int m = 0; m < M; m++) {
    used[0] = true;
    used[1] = true;
    used[2] = true;
    used[3] = true;

    for (int n = 0; n < N; n++) {
      if (black[n][m] == 'A') {
        used[0] = false;
      } else if (black[n][m] == 'C') {
        used[1] = false;
      } else if (black[n][m] == 'G') {
        used[2] = false;
      } else if (black[n][m] == 'T') {
        used[3] = false;
      }
    }

    bool found = false;
    for (int cn = 0; cn < N; cn++) {
      if (brown[cn][m] == 'A' && used[0] == false) {
        found = true;
      } else if (brown[cn][m] == 'C' && used[1] == false) {
        found = true;
      } else if (brown[cn][m] == 'G' && used[2] == false) {
        found = true;
      } else if (brown[cn][m] == 'T' && used[3] == false) {
        found = true;
      }
    }
    if (found) count++;
  }

  cout << M - count << endl;

  return 0;
}
