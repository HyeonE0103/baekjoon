#include <iostream>
#include <string>
using namespace std;

int main() {	//���1
	int num = 0;
	string s;
	getline(cin, s);	//cin�� ���� ������ ���� �� ���� ������ getline�� �����
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ' && s[i + 1] == ' '|| s[i] != ' ' && s[i + 1] == '\0')
			num++;	//�ܾ��� ���� �����ڰ� �������̰� �� �������ڰ� ������
	}				//���ڿ��� ���� '\0'�ε� �������� ������ ���� �ܾ �ƴϱ⶧���� !=' '
	cout << num;
}
/*
int main()	//���2
{
	string s;
	int num = 0;
	while (cin >> s)	//cin�� ������ �������� �װ� �̿��� ��
	{
		num++;
	}
	cout << num;

	return 0;
}
*/