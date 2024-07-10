#include <bits/stdc++.h>
using namespace std;

int n;
int B;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> B;

    vector<int> c;

    for (int i = 0; n > 0; i++) {
        c.push_back(n % B);
        n /= B;
    }

    for (int i = c.size() - 1; i > -1; i--) { 
        cout << c[i];
    }

    return 0;
}