/*
#include <iostream>
#include <string>
using namespace std;

int main() {	//��Ȳ���� ���� �ܾ� ���Ǹ� �� ��������
	int num = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-')
				i++;	//�Ѵܾ �Ѿ�� ���� i�� �ܾ� �������ڷ� ������ ����
		}
		if (s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=')
				i += 2;
			else if (s[i + 1] == '-')
				i++;
		}
		if (s[i] == 'l') {
			if (s[i + 1] == 'j')
				i++;
		}
		if (s[i] == 'n') {
			if (s[i + 1] == 'j')
				i++;
		}
		if (s[i] == 's') {
			if (s[i + 1] == '=')
				i++;
		}
		if (s[i] == 'z') {
			if (s[i + 1] == '=')
				i++;
		}
		num++;	//�ܾ ���������� �ܾ� ���ڸ� �÷��ش�
	}
	cout << num << '\n';
}
*/