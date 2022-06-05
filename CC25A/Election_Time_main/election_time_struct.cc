#include <bits/stdc++.h>
using namespace std;

int N, K;
struct cows {
    int id;
    long avote, bvote;
};

bool acomp(cows a, cows b) {
    return (a.avote > b.avote);
}
bool bcomp(cows a, cows b) {
    return (a.bvote > b.bvote);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    vector<cows> c(N);
    for (int i = 0; i < N; i++) {
        cin >> c[i].avote >> c[i].bvote;
        c[i].id = i + 1;
    }

    sort(c.begin(), c.end(), acomp);
    sort(c.begin(), c.begin()+K, bcomp);

    cout << c[0].id;

    return 0;
}
