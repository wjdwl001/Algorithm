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
		vector<int> vec(26); //�̹� �տ��� ���� ���ĺ��� �˱� ���� ����
		if (str.length() >= 2) { //�� �ܾ �ѱ��ڶ�� �н�
			for (int j = 0; j < str.length() - 1; j++) { //�ܾ� ������ŭ �ݺ�
				if (vec[str[j] - 97] > 0) { //���� ���� �ִ� ���ĺ��� �̹� �տ��� ���� ���ĺ��̶��
					cnt--; //�� �ܾ�� �׷�ܾ �ƴ�
					break;
				}
				if (str[j] != str[j + 1]) { //���� ���� �ִ� ���ĺ� �ڿ� �ٸ� ���ĺ��� ���´ٸ�
					char index(str[j]);
					index -= 97;
					vec[index]++; //�ش� ���ĺ��� �ش��ϴ� ���� ������Ʈ
				}
			}
			if (vec[str[str.length() - 1] - 97] != vec[str[str.length() - 2] - 97]) //������ ���ĺ��� ���ӵǴ� ���ĺ��� �ƴ϶�� (���ӵǴ� ���ڿ��ٸ� �̹� ��׷�ܾ�� ó��������)
				if (vec[str[str.length() - 1] - 97] > 0) cnt--; //������ ���ĺ��� �̹� �տ��� ���� ���ĺ��̶�� �� �ܾ�� �׷�ܾ �ƴ�
			if (vec[0] == vec[str.length() - 1]) cnt--;
		}
	}
	cout << cnt;

	return 0;
}