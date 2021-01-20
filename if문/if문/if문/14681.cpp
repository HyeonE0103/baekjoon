#include <iostream>
#include <climits>	//INT_MAX(int형의 초대 수)를 쓰기위해 추가 
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (a == 0 || b == 0) {
		cout << "a와 b은 0을 제외한 수"<<endl;
		cin.clear();     //  error flag 들을 클리어 시킴 
		cin.ignore(INT_MAX, '\n');  // 현재 읽은 값에서 INT_MAX개 만큼
								    // (충분히) \n을 만날때 까지 버퍼를 버림 
		cin >> a>> b;      // 재입력 
	}
	if (a > 0 && b > 0)
		cout << "1" << endl;
	else if (a < 0 && b>0)
		cout << "2" << endl;
	else if (a < 0 && b < 0)
		cout << "3" << endl;
	else
		cout << "4" << endl;
	
}