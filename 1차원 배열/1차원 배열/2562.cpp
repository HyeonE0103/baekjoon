#include <iostream>
#include <climits>
using namespace std;

int main() {
	int arr[9];
	int n = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		while (arr[i] < 0 || arr[i] > 100) {
			cout << "100보다 작은 자연수 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> arr[i];
		}
	}

	int max = arr[0];

	for (int i = 0; i < 9; i++) {
		if (max <= arr[i]) {	//이상이 아니라 초과를 하면 틀린걸로 나옴.
			max = arr[i];		//이유는 n의 초기값을 0으로 주었는데 첫번째 숫자가 최대값일 경우 n이 1이어야하기때문
			n = i + 1;			//초과로 놓을려고 n의 값을 1로 놓고 max<arr[i]로 놓으면 된다.
		}
	}
	cout << max << '\n' << n;
	return 0;

}