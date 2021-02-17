#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, num=0;
	cin >> n;
	while (n < 3 || n>5000) {
		cout << "3<=n<=5000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	while (n > 0) {
		if (n == 6 || n == 3 || n==9 || n==12) {	//둘이 최소공배수 15전까지 3의 배수들
			num = num + (n / 3);
			n = 0;
		}
		else {
			n = n - 5;
			num++;
		}
		if (n < 0)	//정확한 n킬로그램을 만들 수 없는 경우
			num = -1;
	}
	cout << num << '\n';
}