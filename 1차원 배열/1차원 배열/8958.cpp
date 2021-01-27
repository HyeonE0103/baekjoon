#include <iostream>
#include <string>	//string을 사용하기 위해
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
			if (s[i] == 'O') {	//소문자로 하면 틀림 대문자로 해야함
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