#include <bits/stdc++.h>
using namespace std;

int N;
struct Game {
    int g;
    string n;
    int p;
};

bool comp(Game a, Game b) { return a.g < b.g; }

string comp_int(int b, int e, int m) {
    if (b > e && b > m) {
        return "b";
    } else if (e > b && e > m) {
        return "e";
    } else if (m > b && m > e) {
        return "m";
    } else if (b == e && e == m) {
        return "bem";
    } else if (b == e) {
        return "be";
    } else if (b == m) {
        return "bm";
    } else if (e == m) {
        return "em";
    } else {
        return "box";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    vector<Game> g(N);
    for (Game& i : g) cin >> i.g >> i.n >> i.p;
    sort(g.begin(), g.end(), comp);

    int counter = 0;
    string leader = "x";
    int b = 0;
    int e = 0;
    int m = 0;

    // g - game, n - name, p - points
    for (Game& i : g) {
        if (i.n == "Bessie") {
            b += i.p;
        } else if (i.n == "Elsie") {
            e += i.p;
        } else if (i.n == "Mildred") {
            m += i.p;
        }

        string new_leader = comp_int(b, e, m);
        if (leader != new_leader) {
            leader = new_leader;
            counter++;
        }
    }

    cout << counter << "\n";
}
