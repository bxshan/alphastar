#include <bits/stdc++.h>
using namespace std;

string A, B;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> A >> B;

  vector<char> achar(A.begin(), A.end());
  vector<char> bchar(B.begin(), B.end());

  int asize = 0;
  int bsize = 0;

  for (int i = 0; i < min(achar.size(), bchar.size()); i++) {
    bool is_same = true;
    for (int j = 0; j <= i; j++) {
      if (achar[j] != bchar[bchar.size() - i - 1 + j]) {
        is_same = false;
        break;
      }
    }
    if (is_same) {
      asize = i + 1;
    }
  }

  for (int i = 0; i < min(achar.size(), bchar.size()); i++) {
    bool is_same = true;
    for (int j = 0; j <= i; j++) {
      if (bchar[j] != achar[achar.size() - i - 1 + j]) {
        is_same = false;
        break;
      }
    }
    if (is_same) {
      bsize = i + 1;
    }
  }

  cout << max(asize, bsize);
}
