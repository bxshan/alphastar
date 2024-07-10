#include <bits/stdc++.h>
using namespace std;

int A, B;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> A >> B;

    vector<int> digits(10, 0);

    for (int i = A; i <= B; i++) {
        int number = i;
        while (number > 0) {
            int digit = number % 10;
            number /= 10;
            digits[digit]++;
        }
    }
    for (int i : digits) {
        cout << i << " ";
    }
}
