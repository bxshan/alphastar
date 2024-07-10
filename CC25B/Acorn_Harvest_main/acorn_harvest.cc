#include <bits/stdc++.h>
using namespace std;
 
int N;
struct Circles {
    int x;
    int y;
    int r;
};
 
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<Circles> c(N);
    for (Circles &i : c) {
        cin >> i.x >> i.y >> i.r;
    }
 
    return 0;
} 