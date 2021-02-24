#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void move(int n, int from, int to) {
	
	int middle = 6 - from - to;
	

	if (n == 1) {	//종료조건
		cout << from <<' '<< to << '\n';
		return;
	}
	if (n >= 2) {
		move(n - 1, from, middle);
		move(1, from, to);	//가장 밑판
		move(n - 1, middle, to);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	while (n < 1 || n>20) {
		cout << "1<=n<=20 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	cout << int(pow(2,n)-1) << '\n';	//A(n) = 2*A(n-1)+1 -> An = 2^n-1 
	move(n, 1, 3);

}	//pow(제곱합수) 함수의 인자와 반화형은 double