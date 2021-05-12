#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string newStr1 = "", newStr2 = "";
	cin >> str;
	int cnt = str.length();
	int len = str.length();
	str.append("  ");
	for (int i = 0; i < len; i++) {
		string s1, s2, s3;
		s1 = str[i];
		s2 = str[i + 1];
		s3 = str[i + 2];
		newStr1 = s1 + s2;
		newStr2 = s1 + s2 + s3;
		if (newStr2 == "dz=") {
			cnt -= 2;
			i+=2;
		}
		else if (newStr1 == "c=" || newStr1 == "c-" || newStr1 == "d-" || newStr1 == "lj" || newStr1 == "nj" || newStr1 == "s=" || newStr1 == "z="){
			cnt--;
			i++;
		}
		string s;
	}
	cout << cnt;
	return 0;
}