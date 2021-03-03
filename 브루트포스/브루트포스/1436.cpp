#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
	int n,num=0;
	cin >> n;
	while (n < 1||n>10000) {
		cout << "1<=n<=10000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	for (int i = 666; ; i++) {
		string s = to_string(i);
		if (s.find("666") != -1)	//666들어가는 숫자를 세어준다
			num++;
		if (num == n) {				//666이들어간 숫자번째와 n번째가 같으면 출력
			cout << i;
			return 0;
		}
	}
}
//순서를 잘 생각해보아야함 뒤에 666으로 고정된게 아님
//666 1666 2666 3666 4666 5666 6660 6661 ....