#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<int> c(N);
    vector<int> cc;
    vector<int> cc_sort;

    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }

    cc.push_back(c[0]);
    cc_sort.push_back(c[0]);
    for (int i = 1; i < N; i++) {
        if (c[i - 1] != c[i]) {
            cc.push_back(c[i]);
            cc_sort.push_back(c[i]);
        }
    }
    sort(cc_sort.begin(), cc_sort.end());

    int cnt = 0;
    vector<int>::iterator it;

    for (int i = 0; i < cc.size(); i++) {
        if (cc[i] != cc_sort[i]) {
            if (cc[i] != cc_sort[i + 1]) {
                it = find(cc_sort.begin() + i, cc_sort.end(), cc[i]);
                int pos = it - cc_sort.begin();
                cout << pos - i;
            } else if (cc_sort[i] != cc[i + 1]) {
                it = find(cc.begin() + i, cc.end(), cc_sort[i]);
                int pos = it - cc.begin();
                cout << pos - i;
            } else {
                cout << 1;
            }
            break;
        }
    }

    return 0;
}
