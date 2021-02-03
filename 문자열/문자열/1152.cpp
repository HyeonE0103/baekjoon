#include <iostream>
#include <string>
using namespace std;

int main() {	//방법1
	int num = 0;
	string s;
	getline(cin, s);	//cin을 쓰면 공백을 받을 수 없기 때문에 getline을 써야함
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ' && s[i + 1] == ' '|| s[i] != ' ' && s[i + 1] == '\0')
			num++;	//단어의 끝은 현글자가 마지막이고 그 다음글자가 공백임
	}				//문자열의 끝은 '\0'인데 마지막에 공백이 오면 단어가 아니기때문에 !=' '
	cout << num;
}
/*
int main()	//방법2
{
	string s;
	int num = 0;
	while (cin >> s)	//cin은 공백을 못받으니 그걸 이용한 것
	{
		num++;
	}
	cout << num;

	return 0;
}
*/