#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	vector <int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); //석원과 규현의 거리
		if (d == 0 && r1 == r2)	//둘이 같은 위치에 있고 같은 거리를 잰다면 원으로 선 어디든 있을수 있음
			v.push_back(-1);
		else if (d == r1 + r2 || d == abs(r1 - r2))	// 한점에서 만남
			v.push_back(1);							//원안에 원이 있거나 원이 한점에서 만나는 형태
		else if (d > r1 + r2 || d < abs(r1 - r2))	//원이 떨어져 있는 상태 
			v.push_back(0);
		else
			v.push_back(2);	
	}
	for (auto i : v)
		cout << i << '\n';
}	//sqrt(루트), pow(제곱), abs(절대값) 