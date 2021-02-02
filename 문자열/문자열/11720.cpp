/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, an=0;	//정수형으로 받고 to_string으로 받는법도 해보았으나 크기차이로 인해
	cin >> n;		//25개 이상 받는다고 하면 제대로 된 숫자를 받을 수 없음
	string s;
	cin >> s;

	for (int i = 0; i < n; i++) {
		an = an + (s[i]-'0');	//s[i]를 디버그를 돌려보면 그 자체 숫자가 아닌 
	}							//숫자의 아스키코드값이 들어가 있음.
	cout << an << endl;			//그래서 그 아스키값에 0의 아스키값을 뺀 수가 그 수가 되므로
}								//'0'을 빼줌 ex) '1'-'0' = 49-48 = 1
*/