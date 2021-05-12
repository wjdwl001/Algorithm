#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	for (int k = 0; k < x; k++) {
		int N;
		cin >> N;
		string str, newStr = "";
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < N; j++) {
				newStr += str[i];
			}
		}
		cout << newStr << endl;
	}

	return 0;
}