//합
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}

