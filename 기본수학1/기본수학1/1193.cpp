/*
#include <iostream>
using namespace std;

int main() {
	int n, a = 1, k = 1;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		if (k % 2 != 0) {
			if (a == 1) {
				k++;
				a = 1;
			}
			else
				a--;
		}
		else {
			if (a == k) {
				k++;
				a = k;
			}
			else
				a++;
		}
	}
	cout << a << "/" << k + 1 - a << "\n";
}
//a는 1, 1,2, 3,2,1, 1,2,3,4..  식으로 진행되니 홀수번째에는 오름차순, 홀수번째는 내림차순으로 진행
								개수는 1->2->3->4로 진행되어 그것을 이용
*/