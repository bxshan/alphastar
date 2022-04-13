#include <bits/stdc++.h>
using namespace std;

int N, output;
bool correct = true;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  vector <int> c(N);
  // L - F, R - T
  vector <bool> d(N);
  for (int i = 0; i < N; i++) {
      cin >> c[i];
  }
  sort(c.begin(), c.end());
  c.insert(c.begin(), 10000);
  c.push_back(10000);

  for (int i: c) {
    cout << i << " ";
  }
  cout << endl;

  for (int i = 1; i < N; i++) {
    cout << "i" << i << endl;
    cout << c[i - 1] << " " << c[i] << " " << c[i+1] << endl;
    cout << abs(c[i] - c[i-1]) << " : " << abs(c[i+1] - c[i]) << endl;
    if (abs(c[i] - c[i-1]) <= abs(c[i+1] - c[i])) {
      d[i] = false; //L
    } else {
      d[i] = true; //R
    }

    cout << d[i] << endl;
  }

  cout << endl << endl;
  for (bool k: d) {
    if (k) cout << "right" << " ";
    if (!k) cout << "left" << " ";
  }



  /*c.insert(c.begin(), -10000);
  // c.insert(c.begin(), -1001);
  c.push_back(10000);

  for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
  cout << endl;
  for (int i = 1; i < c.size(); i++) cout << c[i] - c[i-1] << " ";
  cout << endl;
  //for (int i: c) cout << i << " ";
  //cout << endl;


  // for (int i = 2; i < N-1; i++) {
  //   if (c[i] - c[i-1] <= c[i+1] - c[i] && c[i] - c[i-1] < c[i-1] - c[i-2]) {
  //     //cout << c[i-1] << " " << c[i] << endl;
  //     output++;
  //   }
  // }

  for (int i = 1; i <= N-1; i++) {
    // if (c[i+1] - c[i] <= c[i+2] - c[i+1] && c[i+1] - c[i] < c[i] - c[i-1]) {
    if (c[i+1] - c[i] > c[i+2] - c[i+1]) {
      //cout << c[i-1] << " " << c[i] << endl;
      cout << c[i] << endl;
      output++;
    }
  }


                   \
          | |   |  | |
    -1001 2 3 4 8 11 16 24
          |              |


    */

    //cout << output;

    return 0;
}
