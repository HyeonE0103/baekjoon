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
		p2[n2] = 0;	//�ʱ�ȭ
		for (int j = 0; j < n2; j++) {
			cin >> p2[j];
			p2[n2] += p2[j];
		p2[n2] = p2[n2] / n2;

		for (int j = 0; j < n2; j++) {
			if (p2[j] > p2[n2])
				ra++;
		}
		p[i] = ((double)ra / (double)n2) * 100;	//ra�� n2�� double�� ĳ���� ���� �ʴ´ٸ�
												//��� �����÷ΰ� ���� ����!!
	}						//������ �Ҽ��� n��° �ڸ����� ��Ÿ��
	cout << fixed;			//fixed��,�� ���� �Ǽ����� �����κ��� �����Ͽ� 10�ڸ��� ����� �� ����
	cout.precision(3);
	for (int i = 0; i < n; i++)
		cout <<p[i] << "% \n";
}