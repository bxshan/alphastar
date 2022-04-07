#include <bits/stdc++.h>
using namespace std;

string A, B;

int getIndex(vector<char> alphabet, char c) {
    auto it = find(alphabet.begin(), alphabet.end(), c);
    int index = it - alphabet.begin();
    return index;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> A >> B;
    string alphabetStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<char> alphabet(alphabetStr.begin(), alphabetStr.end());

    int anum = 1;
    int bnum = 1;

    for (char i : A) {
        anum *= getIndex(alphabet, i) + 1;
    }
    anum = anum % 47;

    for (char j : B) {
        bnum *= getIndex(alphabet, j) + 1;
    }
    bnum = bnum % 47;

    if (anum == bnum) {
        cout << "GO";
    } else {
        cout << "STAY";
    }
}
