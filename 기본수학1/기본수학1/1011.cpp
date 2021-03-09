#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);	//속도 향샹을 위해
	int t;
	vector <long long>  v;			
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long x, y, n, sq=0, an=0;	//long long으로 안하고 int로 하니 시간초과로 틀림
		cin >> x >> y;
		n = y - x;	//행성간의 거리
		while (sq * sq < n)				
			sq++;
		if (sq * sq - sq < n)			//제곱수 - 제곱근을 뺀수가 분기점!!
			v.push_back(sq * 2 - 1);	//ex)제곱근 4의 제곱수 16, 16 - 4 = 12
		else							 //12를 기점으로 12는 작동횟수가 6이고 13부터 16까지는 7
			v.push_back(sq * 2 - 2);
	}
	for (auto i : v)
		cout << i << '\n';
}