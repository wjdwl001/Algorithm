#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, max = 0;
	float sum = 0;
	cin >> N;
	vector<float> score(N);
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i = 0; i < N; i++) score[i] = score[i] / max * 100;
	for (int i = 0; i < N; i++) sum += score[i];
	float average = sum / N;
	cout << fixed;	
	cout.precision(3);
	cout << average;

	return 0;
}