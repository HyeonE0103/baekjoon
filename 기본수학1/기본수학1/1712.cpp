#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;	//a=고정비용, b=가변비용(생산비?), c=물건 값
	if (c <= b)	//이익이 가변비용보다 적거나 같으면 손익분기점을 넘을 수가 없음
		cout << "-1" << endl;
	else {
		cout << (a / (c - b)) + 1 << endl;
	}	// c-b = 물건 값에서 가변비용 뺀 판매순익
		//고정비용/판매순익을 한 후 +1을 하면 순익분기점이 넘을 때 판매량
}