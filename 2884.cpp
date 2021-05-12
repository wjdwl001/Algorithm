#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	if (m < 45) {
		if (h == 0) { h = 23; m = 15 + m; }
		else { h--; m = 15 + m; }
	}
	else m -= 45;

	cout << h << ' ' << m;

	return 0;
}
