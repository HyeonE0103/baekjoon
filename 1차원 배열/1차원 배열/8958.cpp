#include <iostream>
#include <string>	//string�� ����ϱ� ����
using namespace std;

int main() {
	int n;
	cin >> n;
	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int sn = 0, an = 0;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {	//�ҹ��ڷ� �ϸ� Ʋ�� �빮�ڷ� �ؾ���
				sn++;
				an += sn;
			}
			else
				sn = 0;
		}
		p[i] = an;
	}
	for (int i = 0; i < n; i++) {
		cout << p[i] << '\n';
	}
	delete[] p;
}