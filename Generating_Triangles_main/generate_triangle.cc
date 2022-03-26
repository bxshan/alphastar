#include <bits/stdc++.h>
using namespace std;

int N, S;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> S;
  int area = N * (N+1)/2;
  int count = S;
  vector<int> num[area];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i + 1; j++) {
      num[i].push_back(count);
      if (count == 9) {
        count = 1;
      } else {
        count++;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      cout << "  ";
    }
    for (int j = i; j < N; j++) {
      cout << num[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}
