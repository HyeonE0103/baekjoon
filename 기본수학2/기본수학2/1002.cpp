#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	vector <int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); //������ ������ �Ÿ�
		if (d == 0 && r1 == r2)	//���� ���� ��ġ�� �ְ� ���� �Ÿ��� ��ٸ� ������ �� ���� ������ ����
			v.push_back(-1);
		else if (d == r1 + r2 || d == abs(r1 - r2))	// �������� ����
			v.push_back(1);							//���ȿ� ���� �ְų� ���� �������� ������ ����
		else if (d > r1 + r2 || d < abs(r1 - r2))	//���� ������ �ִ� ���� 
			v.push_back(0);
		else
			v.push_back(2);	
	}
	for (auto i : v)
		cout << i << '\n';
}	//sqrt(��Ʈ), pow(����), abs(���밪) 