#include <bits/stdc++.h>
using namespace std;

int N, L;
string wtemp;
int htemp, mtemp;

struct Cleaning {
    int id;
    bool is_cleaning;
    int time;
};

bool comp(const Cleaning& a, const Cleaning& b) {
    if (a.id > b.id) {
        return false;
    } else if (a.id < b.id) {
        return true;
    } else if (a.id == b.id) {
        return a.time < b.time;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> L;
    vector<Cleaning> c(L);

    for (Cleaning& i : c) {
        cin >> i.id >> wtemp >> htemp >> mtemp;
        if (wtemp == "START") {
            i.is_cleaning = true;
        } else {
            i.is_cleaning = false;
        }
        i.time = htemp * 60 + mtemp;
    }

    sort(c.begin(), c.end(), comp);

    vector<int> output(N);
    for (int i = 0; i < L; i++) {
        if (!c[i].is_cleaning) {
            output[c[i].id - 1] += (c[i].time - c[i - 1].time);
        }
    }

    for (int i : output) {
        cout << floor(i / 60) << " " << i - (floor(i / 60)) * 60;
        cout << endl;
    }

    return 0;
}
