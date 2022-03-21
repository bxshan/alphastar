#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> N;
	vector<int> rule(N);
	vector<int> id(N);
	for (int& r: rule) cin >> r, r -= 1;
	for (int& r: id) cin >> r;

	vector<int> l[4];
	for (vector<int>& i: l) i.reserve(N);

	for (int i = 0; i < N; i++) l[0][i] = i + 1;
	
	for (int i = 1; i < 4; i++) {
		for (int j = 0; j < N; j++) {
			l[i][j] = l[i-1][rule[j]];
		}
	}

	vector<int> original_id(N);
	for (int i = 0; i < N; i++) {
		original_id[l[3][i] - 1] = id[i];
	}

	for (int i: original_id) cout << i << endl;
}
