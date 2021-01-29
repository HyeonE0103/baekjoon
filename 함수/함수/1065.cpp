#include <iostream>
#include <vector>
using namespace std;

void hansu(int n) {
	int num=99;
	if (n > 99) {
		for (int i = 100; i <= n; i++) {
			int a, b, c;		//1000보다 작거나지만 1000은 한수가 아니므로
			a = i / 100;			//999까지 살펴보면 되기때문에 
			b = (i / 10) % 10;	//백의자리수와 십의 자리수의 차와 
			c = i % 10;			//십의 자리수와 일의 자리수의 차를 비교해보면 됨
			if ((a - b) == (b - c))
				num++;
		}
	}
	else
		num = n;
	cout << num << endl;
}

int main() {
	int n;
	cin >> n;
	hansu(n);	
}
//한수 이해에 어려움을 겪음
//예제 110을 보면 출력값이 99이므로 1~99까지는 한수인걸 알 수 있으며
//예제 210을 보면 출력값이 105이므로 111같이 차가 0이어도 한수로 본다
