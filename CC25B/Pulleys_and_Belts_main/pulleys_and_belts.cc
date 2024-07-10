#include <bits/stdc++.h>
using namespace std;

int N, cnt;
struct Pulleys {
    int s, d, c;
};

bool comp(Pulleys a, Pulleys b) { return a.s < b.s; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<Pulleys> p(N - 1);
    for (Pulleys &i : p) {
        cin >> i.s >> i.d >> i.c;
    }

    sort(p.begin(), p.end(), comp);

    cnt = 0;

    for (int i = 0; i < N - 1; i++) {
        cnt = cnt ^ p[i].c;
    }

    cout << cnt;

    return 0;
}