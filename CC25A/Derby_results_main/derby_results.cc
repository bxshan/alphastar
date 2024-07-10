#include <bits/stdc++.h>
using namespace std;

int N;
struct Time {
    int hh, mm, ss;
};

bool comp(Time a, Time b) {
    if (a.hh < b.hh) {
        return true;
    } else if (a.hh == b.hh) {
        if (a.mm < b.mm) {
            return true;
        } else if (a.mm == b.mm) {
            if (a.ss < b.ss) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    vector<Time> t(N);
    for (Time& i : t) cin >> i.hh >> i.mm >> i.ss;
    sort(t.begin(), t.end(), comp);

    for (Time& i : t) cout << i.hh << " " << i.mm << " " << i.ss << "\n";
}
