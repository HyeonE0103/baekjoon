#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);	//�ӵ� �⼧�� ����
	int t;
	vector <long long>  v;			
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long x, y, n, sq=0, an=0;	//long long���� ���ϰ� int�� �ϴ� �ð��ʰ��� Ʋ��
		cin >> x >> y;
		n = y - x;	//�༺���� �Ÿ�
		while (sq * sq < n)				
			sq++;
		if (sq * sq - sq < n)			//������ - �������� ������ �б���!!
			v.push_back(sq * 2 - 1);	//ex)������ 4�� ������ 16, 16 - 4 = 12
		else							 //12�� �������� 12�� �۵�Ƚ���� 6�̰� 13���� 16������ 7
			v.push_back(sq * 2 - 2);
	}
	for (auto i : v)
		cout << i << '\n';
}