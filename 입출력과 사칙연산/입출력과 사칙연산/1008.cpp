#include <iostream>
using namespace std;
int main() {
	double a, b,c;
	cin >> a >> b;
	c = a / b;
	cout.precision(10);
	cout << c <<endl;
}

/*
precision()은 소수점 자리수를 지정 위에서는 10으로 해놓았기 때문에 소수점 뒤에 숫자가 10자리가 표시되는 것
또한 float을 이용하게 되면 소수점 6까지 정확한 숫자를 보여주고
그 이하는 이상한 숫자(쓰레기값)를 보여주니 6자리 이상일 경우에는 double을 사용하는 것이 좋다
*/