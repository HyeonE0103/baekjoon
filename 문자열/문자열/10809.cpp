/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a[26];
	for (int i = 0; i < 26; i++) {	//-1로 초기화
		a[i] = -1;
	}
	for (int i = 0; i < s.size(); i++) {
		if(a[s[i] - 'a']==-1)	//그 알파벳이 처음 등장하는 위치로 출력해야하므로
			a[s[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << a[i] << " ";
}
*/