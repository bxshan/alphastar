#include <bits/stdc++.h>
using namespace std;

int Y, X, tmp, tmp_output, output, tmp_outY, tmp_outX, outY, outX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> Y >> X;
    vector<int> N[Y];
    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X; j++) {
            cin >> tmp;
            N[i].push_back(tmp);
        }
    }

    for (int i = 0; i < Y - 2; i++) {
        for (int j = 0; j < X - 2; j++) {
            tmp_output += N[i + 0][j + 0];
            tmp_output += N[i + 0][j + 1];
            tmp_output += N[i + 0][j + 2];
            tmp_output += N[i + 1][j + 0];
            tmp_output += N[i + 1][j + 1];
            tmp_output += N[i + 1][j + 2];
            tmp_output += N[i + 2][j + 0];
            tmp_output += N[i + 2][j + 1];
            tmp_output += N[i + 2][j + 2];

            tmp_outY = i;
            tmp_outX = j;

            if (tmp_output > output) {
                output = tmp_output;
                outY = tmp_outY;
                outX = tmp_outX;
            }
            tmp_output = 0;
        }
    }

    cout << output << endl << outY + 1 << " " << outX + 1;

    return 0;
}
