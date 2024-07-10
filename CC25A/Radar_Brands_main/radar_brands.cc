#include <bits/stdc++.h>
using namespace std;

int N;

int reverse(int n) {
    int cnt = 0;
    int reverse_n = 0;

    while (n != 0) {
        reverse_n = reverse_n * 10 + (n % 10);
        n -= n % 10;
        n = n / 10;
        cnt++;
    }
    return reverse_n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    int cnt = 0;
    while (reverse(N) != N) {
        N += reverse(N);
        cnt++;
    }

    cout << cnt << " " << N;

    return 0;
}
