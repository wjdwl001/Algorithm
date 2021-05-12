#include <iostream>
#include <vector>
using namespace std;

int main() {
	int cnt;
	cin >> cnt;
	int loop = cnt;
	for (int i = 0; i < loop; i++) {
		string str;
		cin >> str;
		vector<int> vec(26); //이미 앞에서 나온 알파벳을 알기 위한 벡터
		if (str.length() >= 2) { //이 단어가 한글자라면 패스
			for (int j = 0; j < str.length() - 1; j++) { //단어 개수만큼 반복
				if (vec[str[j] - 97] > 0) { //지금 보고 있는 알파벳이 이미 앞에서 나온 알파벳이라면
					cnt--; //이 단어는 그룹단어가 아님
					break;
				}
				if (str[j] != str[j + 1]) { //지금 보고 있는 알파벳 뒤에 다른 알파벳이 나온다면
					char index(str[j]);
					index -= 97;
					vec[index]++; //해당 알파벳에 해당하는 벡터 업데이트
				}
			}
			if (vec[str[str.length() - 1] - 97] != vec[str[str.length() - 2] - 97]) //마지막 알파벳이 연속되는 알파벳이 아니라면 (연속되는 글자였다면 이미 비그룹단어로 처리됐을것)
				if (vec[str[str.length() - 1] - 97] > 0) cnt--; //마지막 알파벳이 이미 앞에서 나온 알파벳이라면 이 단어는 그룹단어가 아님
			if (vec[0] == vec[str.length() - 1]) cnt--;
		}
	}
	cout << cnt;

	return 0;
}