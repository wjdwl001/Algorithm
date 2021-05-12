#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		char ch(str[i]);
		ch = ch - 65;
		if (ch >= 18) {
			ch -= 1;
		}
		ch = ch / 3;
		ch = ch + 3;
		if (ch == 11) ch = 10;
		sum += ch;
	}
	cout << sum;
	return 0;
}