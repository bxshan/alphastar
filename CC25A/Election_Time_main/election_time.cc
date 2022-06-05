#include <bits/stdc++.h>
using namespace std;

int N, K, out, id;
vector<int>::iterator it;

bool comp(int a, int b) { return (a > b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    vector<int> a(N);
    vector<int> temp_a(N);
    vector<int> b(N);
    vector<int> pass(K);

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < N; i++) {
        temp_a[i] = a[i];
    }

    sort(a.begin(), a.end(), comp);

    for (int i = 0; i < K; i++) {
        pass[i] = a[i];
    }

    for (int i = 0; i < K; i++) {
        it = find(temp_a.begin(), temp_a.end(), pass[i]);
        pass[i] = it - temp_a.begin();
    }

    for (int i = 0; i < K; i++) {
        if (b[pass[i]] > out) {
            id = pass[i];
            out = b[pass[i]];
        }
    }

    cout << id + 1;

    return 0;
}
