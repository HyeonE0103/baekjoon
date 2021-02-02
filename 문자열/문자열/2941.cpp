/*
#include <iostream>
#include <string>
using namespace std;

int main() {	//당황하지 말고 단어 조건만 잘 나눠보자
	int num = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-')
				i++;	//한단어를 넘어가기 위해 i를 단어 다음글자로 보내기 위해
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
		num++;	//단어가 끝날때마다 단어 숫자를 올려준다
	}
	cout << num << '\n';
}
*/