/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a[26];
	for (int i = 0; i < 26; i++) {	//-1�� �ʱ�ȭ
		a[i] = -1;
	}
	for (int i = 0; i < s.size(); i++) {
		if(a[s[i] - 'a']==-1)	//�� ���ĺ��� ó�� �����ϴ� ��ġ�� ����ؾ��ϹǷ�
			a[s[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << a[i] << " ";
}
*/