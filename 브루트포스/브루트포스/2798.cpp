#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int n, m, num = INT_MAX;
	vector <int> v,an;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i <n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (v[i] + v[j] + v[k] <= m)	
					an.push_back(v[i] + v[j] + v[k]);
				else
					break;	//정렬했기때문에 수가 M보다 커지면 그 다음수를 더해볼 필요가 없음
			}
		}
	}
	sort(an.begin(), an.end());	//어쩌피 M이하로 받았기 때문에 정렬했을때 제일 마지막에 있는 수가
								//M을 넘지않는 M과 최대한 가까운수
	cout << an[an.size()-1] << '\n';
}