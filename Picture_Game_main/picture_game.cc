#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> words[100];
vector<int> word0(26);
vector<int> word1(26);
vector<int> output(26, 0);

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		words[i].resize(2);
		cin >> words[i][0] >> words[i][1];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			for (int b = 0; b < words[i][j].length(); b++) {
				if (j == 0) {
					word0[int(words[i][j][b]) - 97]++;
				} else {
					word1[int(words[i][j][b]) - 97]++;
				}
			}
		}

		for (int l = 0; l < 26; l++) {
			output[l] += max(word0[l], word1[l]);
			word0[l] = word1[l] = 0;
	   	}
	}

	for (int o: output) {
		cout << o << endl;
	}

	return 0;	
}
