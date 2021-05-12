#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int number_of_digits(int n) {
	return floor(log10(n) + 1);
}
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int sum = A * B * C;
	vector<int> vec(10,0); 
	for (int i = 0; i < number_of_digits(sum); i++) {
		int index = (sum / int(pow(10, i))) % 10;
		vec[index]++;
	}

	for (int i = 0; i < 10; i++)
		cout << vec[i] << endl;

	return 0;
}