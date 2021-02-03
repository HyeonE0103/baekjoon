#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, num=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a[26] = { 0, };
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] != s[j + 1]) {	//앞알파벳과 뒤알파벳이 다르면 그 알파벳 위치의 배열 수를 추가함
				a[s[j]-'a']++;	//연속적인 알파벳이 나오면 배열에 추가하지 않음
			}					//떨어져서 나오면 배열 수가 높아지니 1초과 일것
		}
		for (int j = 0; j < 26; j++) {
			if (a[j] > 1) {
				num++;
				break;
			}
		}
	}
	cout << n - num << endl;
}