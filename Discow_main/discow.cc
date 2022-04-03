#include <bits/stdc++.h>
using namespace std;

string temp_in;
vector<char> frisbee;
set<char> found;
int output = 0;

void stack_add(char add) {
  if (frisbee.size() != 0 && frisbee[frisbee.size()-1] == add) {
    frisbee.erase(frisbee.end()-1);
  } else {
    frisbee.push_back(add);
  }
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> temp_in;
  for (int i = 0; i < 52; i++) {
    stack_add(temp_in[i]);
  }

  for (int i = 0; i < frisbee.size(); i++) {
    for (int j = i+1; j < frisbee.size(); j++) {
      if (frisbee[i] == frisbee[j]) {
        for (int l = i+1; l < j; l++) {
          if (found.find(frisbee[l]) == found.end()) {
            found.insert(frisbee[l]);
          } else {
            found.erase(frisbee[l]);
          }
        }
        output += found.size();
        found.clear();
      }
    }
  }

  cout << output/2;
  
  return 0;
}
