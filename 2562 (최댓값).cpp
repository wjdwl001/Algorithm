#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, max, index;
	cin >> max;
	index = 1;
	for (int i = 2; i < 10; i++) {
		cin >> x;
		if (x > max) {
			max = x;
			index = i;
		}
	}
	cout << max << endl << index;

	return 0;
}