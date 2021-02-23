#include <iostream>
#include <vector>
#include <algorithm> //sort사용
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> num;
	vector<string> check;
	while (true) {
		for (int i = 0; i < 3; i++) {
			int n;
			cin >> n;
			num.push_back(n);
		}	
		if (num[0] == 0 && num[1] == 0 && num[2] == 0)
			break;
		else if (num[0] >= 30000 || num[1] >= 30000 || num[2] >= 30000) {
			cout << "x,y,z<30000 \n";
			num.clear();
			for (int i = 0; i < 3; i++) {
				int n;
				num.push_back(n);
			}
		}
		sort(num.begin(),num.end());	// 오름차순정리, 어떤것이 빗변인지 모르니
		if ((num[2] * num[2]) == ((num[0] * num[0]) + (num[1] * num[1])))
			check.push_back("right");
		else
			check.push_back("wrong");
		num.clear();
	}
	for (auto i : check)
		cout << i << '\n';
}