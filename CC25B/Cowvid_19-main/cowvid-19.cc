#include <bits/stdc++.h>
using namespace std;

int N;
int maxcnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<int> c(N);
    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());

    maxcnt = 0;

    for (int startpos = 0; startpos < N; startpos++) {
        int cnt = 1;
        int centerright, centerleft, targetright, targetleft;
        centerright = startpos;
        centerleft = startpos;
        targetright = startpos + 1;
        targetleft = startpos - 1;
        int variantnum = 1;

        while (1) {
            bool infectedright, infectedleft;
            infectedright = false;
            infectedleft = false;

            while (targetright < N &&
                   c[centerright] + variantnum >= c[targetright]) {
                cnt++;
                targetright++;
                infectedright = true;
            }

            while (targetleft > -1 &&
                   c[centerleft] - variantnum <= c[targetleft]) {
                cnt++;
                targetleft--;
                infectedleft = true;
            }

            if (!infectedleft && !infectedright) {
                break;
            }

            if (infectedright) {
                centerright = targetright - 1;
            } else {
                targetright = N;
            }

            if (infectedleft) {
                centerleft = targetleft + 1;
            } else {
                targetleft = -1;
            }

            variantnum++;
        }
        if (cnt > maxcnt) {
            maxcnt = cnt;
        }
    }

    cout << maxcnt;

    return 0;
}