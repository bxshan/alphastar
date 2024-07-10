#include <bits/stdc++.h>
using namespace std;

int H, F;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> H >> F;
    vector<int> prices(F);
    for (int& i : prices) cin >> i;
    sort(prices.begin(), prices.end());

    int price = 0;
    int revenue = 0;
    int curr_revenue = 0;

    for (int i = max(0, F - H); i < F; i++) {
        curr_revenue = prices[i] * (F - i);
        if (curr_revenue > revenue) {
            revenue = curr_revenue;
            price = prices[i];
        }
    }
    cout << price << " " << revenue;
}
