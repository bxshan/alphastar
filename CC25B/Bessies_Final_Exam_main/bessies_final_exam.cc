#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> S;
    int ssize = S.size();

    string a, b, c;
    int carry = 0;
    int tmp;

    a = "0000" + S;
    b = S + "0000";

    // cout << a << " : " << b << endl;

    for (int i = ssize - 1 + 4; i > -1; i--) {
        tmp = (a[i] - '0' + b[i] - '0' + carry);
        if (tmp == 0 || tmp == 1) {
            carry = 0;
        } else {
            carry = 1;
        }
        c = to_string(tmp % 2) + c;

        // cout << " === " << tmp << " | " << carry << " : " << c << endl;
    }

    if (carry == 1) {
        c = "1" + c;
    }

    cout << c;

    return 0;
}