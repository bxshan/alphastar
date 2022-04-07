#include "bits/stdc++.h"
using namespace std;

int N, output;
string chtemp;
int inttemp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<int> v[N];

    for (int i = 0; i < N; i++) {
        v[i].resize(2, 0);
    }

    for (int i = 0; i < N; i++) {
        cin >> chtemp >> inttemp;
        inttemp = abs(inttemp);
        if (chtemp == "S") {
            v[0][inttemp % 2]++;
        } else if (chtemp == "O") {
            v[1][inttemp % 2]++;
        } else if (chtemp == "M") {
            v[2][inttemp % 2]++;
        } else if (chtemp == "E") {
            v[3][inttemp % 2]++;
        } else if (chtemp == "B") {
            v[4][inttemp % 2]++;
        } else if (chtemp == "I") {
            v[5][inttemp % 2]++;
        } else if (chtemp == "G") {
            v[6][inttemp % 2]++;
        }
    }

    output = 0;
    for (int s = 0; s < 2; s++) {
        for (int o = 0; o < 2; o++) {
            for (int m = 0; m < 2; m++) {
                for (int e = 0; e < 2; e++) {
                    for (int b = 0; b < 2; b++) {
                        for (int i = 0; i < 2; i++) {
                            for (int g = 0; g < 2; g++) {
                                if ((o + m + o) * (s + i + s + b + e + e) *
                                        (e + g + o + s) % 2 ==
                                    0) {
                                    output += v[0][s] * v[1][o] * v[2][m] *
                                              v[3][e] * v[4][b] * v[5][i] *
                                              v[6][g];
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << output;

    return 0;
}
