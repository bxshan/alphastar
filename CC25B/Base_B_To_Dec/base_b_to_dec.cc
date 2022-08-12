#include <bits/stdc++.h>
using namespace std;

string N;
int B;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> B;
    cout << stoi(N, 0, B);

    return 0;
}