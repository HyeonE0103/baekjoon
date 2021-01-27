#include <iostream>
using namespace std;

int main() {	//int arr[1000000]을 해도 되지만 불필요한 메모리 낭비로 인해 비효율적
	int n;
	cin >> n;
	int* p = new int[n];	//동적 배열 할당 new[]연산자
	for (int i = 0; i < n; i++)
		cin >> p[i];

	int max = p[0];
	int min = p[0];

	for (int i = 0; i < n; i++) {
		if (max < p[i])
			max = p[i];
	}

	for (int i = 0; i < n; i++) {
		if (min > p[i])
			min = p[i];
	}

	cout << min << " " << max;
	delete[] p;	//동적 배열 해제
}