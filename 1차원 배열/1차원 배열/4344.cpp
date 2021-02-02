#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	double* p = new double[n];
	for (int i = 0; i < n; i++) {
		int n2, ra = 0;;
		cin >> n2;
		double* p2 = new double[n2+1];
		p2[n2] = 0;	//초기화
		for (int j = 0; j < n2; j++) {
			cin >> p2[j];
			p2[n2] += p2[j];
		p2[n2] = p2[n2] / n2;

		for (int j = 0; j < n2; j++) {
			if (p2[j] > p2[n2])
				ra++;
		}
		p[i] = ((double)ra / (double)n2) * 100;	//ra와 n2를 double로 캐스팅 하지 않는다면
												//산술 오버플로가 나니 주의!!
	}						//무조건 소수점 n번째 자리까지 나타냄
	cout << fixed;			//fixedㄹ,ㄹ 빼면 실수에서 정수부분을 포함하여 10자리만 출력할 수 있음
	cout.precision(3);
	for (int i = 0; i < n; i++)
		cout <<p[i] << "% \n";
}