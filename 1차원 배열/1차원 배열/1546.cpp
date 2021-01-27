#include <iostream>
using namespace std;

int main() {
	int n;
	double an=0;
	cin >> n;
	double * p = new double[n];	//n은 정수형
	for (int i = 0; i < n; i++) 
		cin >> p[i];
	double max = p[0];

	for (int i = 0; i < n; i++) {
		an += p[i];
		if (max < p[i])
			max = p[i];
	}
	an = an / max * 100 / n;

	cout << an;
	delete[] p;
}