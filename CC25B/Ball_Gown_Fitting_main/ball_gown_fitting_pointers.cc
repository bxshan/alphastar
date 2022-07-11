#include <bits/stdc++.h>
using namespace std;

int N, S;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> S;
    vector<int> t(N);
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    int low = 0;
    int high = t.size() - 1;
    int size;
    int cnt = 0;

    while (low < high) {
        size = t[low] + t[high];
        if (size <= S) {
            cnt += high - low;
            low++;
        } else {
            high--;
        }
    }

    cout << cnt;

    return 0;
}