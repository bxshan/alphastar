#include <bits/stdc++.h>
using namespace std;

int N;
struct Milking {
    int start, time;
};

bool comp(const Milking& a, const Milking& b) {
    if (a.start == b.start) {
        return a.time < b.time;
    }
    return a.start < b.start;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<Milking> m(N);
    for (Milking& i : m) {
        cin >> i.start >> i.time;
    }

    sort(m.begin(), m.end(), comp);
    int curr_time = (m[0].start + m[0].time);

    for (int i = 1; i < N; i++) {
        if (curr_time < m[i].start) curr_time = m[i].start;
        curr_time += m[i].time;
    }

    cout << curr_time;

    return 0;
}
