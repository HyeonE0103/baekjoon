/*
#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n,an;	//n은  받는 수, an은 총 합한 값
	an = 0;		//an 초기화
	cin >> n;
	while (n < 1 || n>10000) {	//범위안으로 수를 받기 위해
		cout << "n은 0<=n<=10000" << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	for (int i = 1; i <= n; i++) 
		an += i;

	cout << an << endl;
}
*/