#include <bits/stdc++.h>
using namespace std;

int N;
struct Acorns {
    float d;
    float p;
    int index;
};

bool comp(Acorns a, Acorns b) { return a.d / a.p > b.d / b.p; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int counter = 1;
    cin >> N;
    vector<Acorns> a(N);
    for (Acorns &i : a) {
        i.index = counter;
        counter++;
        cin >> i.d >> i.p;
    }

    sort(a.begin(), a.end(), comp);
    // for (Acorns& i: a) cout << i.d << " " << i.p << "\n";

    int price = 0;

    for (int i = 0; i < 3; i++) {
        price += a[i].p;
    }
    cout << price << "\n";

    for (int i = 0; i < 3; i++) {
        cout << a[i].index << "\n";
    }
}
