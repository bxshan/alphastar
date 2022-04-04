#include <bits/stdc++.h>
using namespace std;

string temp;
int N;
vector <bool> tmp90[10], tmp180[10], tmp270[10], tmpmirror[10];

void test90 (const vector <bool> original[]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      tmp90[j][N-i-1] = original[i][j];
    }
  }
}

void test180 (const vector <bool> original[]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      tmp180[N-i-1][N-j-1] = original[i][j];
    }
  }
}

void test270 (const vector <bool> original[]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      tmp270[N-j-1][i] = original[i][j];
    }
  }
}

void mirror (const vector <bool> original[]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      tmpmirror[i][N-j-1] = original[i][j];
    }
  }
}

bool test_same (const vector <bool> a[], const vector <bool> b[]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (a[i][j] != b[i][j]) {
        return false;
      }
    }
  }
  return true;
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  vector <bool> original[N];
  vector <bool> rearranged[N];
  for (int i = 0; i < N; i++) {
    tmp90[i].resize(N);
    tmp180[i].resize(N);
    tmp270[i].resize(N);
    tmpmirror[i].resize(N);
  }

  for (int i = 0; i < N; i++) {
    cin >> temp;
    for (char ch: temp) {
      if (ch == '@') {
        original[i].push_back(true);
      } else {
        original[i].push_back(false);
      }
    }
  }
  for (int i = 0; i < N; i++) {
    cin >> temp;
    for (char ch: temp) {
      if (ch == '@') {
        rearranged[i].push_back(true);
      } else {
        rearranged[i].push_back(false);
      }
    }
  }

  test90(original);
  if (test_same(rearranged, tmp90)) {cout << "1"; return 0;}

  test180(original);
  if (test_same(rearranged, tmp180)) {cout << "2"; return 0;}

  test270(original);
  if (test_same(rearranged, tmp270)) {cout << "3"; return 0;}

  mirror(original);
  if (test_same(rearranged, tmpmirror)) {cout << "4"; return 0;}

  test90(tmpmirror);
  test180(tmpmirror);
  test270(tmpmirror);
  if (test_same(rearranged, tmp90) ||
    test_same(rearranged, tmp180) ||
    test_same(rearranged, tmp270)) {
      cout << "5"; return 0;
    }

  if (test_same(rearranged, original)) {cout << "6"; return 0;}

  cout << "7"; return 0;
}
