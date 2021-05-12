#include <iostream>
#include <vector>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<int> vec(26,0);
	int max = -1, maxIndex = -1;

	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		int t = ch - 65;
		if (t >= 32) t -= 32;
		vec[t]++;
	}

	for (int i = 0; i < 26; i++) {
		if (vec[i] != 0) {
			if (vec[i] > max) {
				max = vec[i];
				maxIndex = i;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (i != maxIndex) {
			if (vec[i] == max) {
				cout << "?";
				return 0;
			}
		}
	}

	if (maxIndex == -1) cout << "?";
	else {
		maxIndex += 65;
		char maxVal = maxIndex;
		cout << maxVal;
	}
	return 0;
}