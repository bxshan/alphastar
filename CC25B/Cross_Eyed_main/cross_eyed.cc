#include <bits/stdc++.h>
using namespace std;

int a, b;
string str_a, str_b;
string max_a, min_a, max_b, min_b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b;
    str_a = to_string(a);
    str_b = to_string(b);
    max_a = str_a;
    min_a = str_a;
    max_b = str_b;
    min_b = str_b;

    for (int i = 0; i < str_a.size(); i++) {
        if (str_a[i] == '5') {
            max_a[i] = '6';
        } else if (str_a[i] == '6') {
            min_a[i] = '5';
        }
    }

    for (int i = 0; i < str_b.size(); i++) {
        if (str_b[i] == '5') {
            max_b[i] = '6';
        } else if (str_b[i] == '6') {
            min_b[i] = '5';
        }
    }

    cout << stoi(min_a) + stoi(min_b) << " " << stoi(max_a) + stoi(max_b);

    return 0;
}