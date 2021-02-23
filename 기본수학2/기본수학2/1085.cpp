#include <iostream>
#include <climits>
using namespace std;

int main() {
	int x, y, w, h;
	int num = 0, num2 = 0;
	cin >> x >> y >> w >> h;	//조건을 확인하면 x,y는 직사각형 안쪽에 있음
	while (w < 1 || w>1000 || h < 1 || h>1000 || x<1 || y<1 || x>w - 1 || y>h - 1) {
		cout << "1<=w,h<=1000 \n";
		cout << "1<=x<=w-1, 1<=y<=h-1 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> x >> y >> w >> h;
	}
	if (w / 2 < x)
		num = w - x;
	else
		num = x;
	if (h / 2 < y)
		num2 = h - y;
	else
		num2 = y;

	if (num > num2)
		cout << num2;
	else
		cout << num;
}