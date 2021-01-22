#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int a, b,n=0;
	vector <int> v;
	while (cin >> a >> b) {	// a,b != EOF ->문제상에는 종료조건이 없음
		v.push_back(a + b);	//EOF는 End Of File의 약자, 파일의끝을 검출해 내기 위한것(ctrl+Z 누르면 종료)
		n++;				//Visual Studio에서는 -1로 define 되어있음
	}
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}