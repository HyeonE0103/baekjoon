/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[26]{ 0, };	//�ʱ�ȭ���� ������ ��Ȯ�� ���� ���� ����
	int maxnum = -1, maxsu = -1, same = -1;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 92) {
			a[s[i] - 'A']++;	//A~Z = 0~25
		}						//��ҹ��ڸ� �������� ����
		else
			a[s[i] - 'a']++;	//a~z = 0~25
	}
	for (int i = 0; i < 26; i++) {
		if (maxsu < a[i]) {
			maxnum = i;
			maxsu = a[i];
			same = -1;
		}
		else if (maxsu == a[i])
			same = 1;
	}
	if (same == 1)
		cout << "?" << endl;
	else
		cout << char(maxnum + 'A') << endl;
}
*/