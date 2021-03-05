#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int nu[8001] = { 0 };
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,num,add=0,max=0,check=0;	
	int n1, n2, n3, n4;
	vector <int> v;
	cin >> n;
	while (n % 2 == 0 || n < 1 || n>500000) {
		cout << "n�� Ȧ��,1<=n<=500000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> num;
		add += num;
		if (num <= 0)
			nu[abs(num)]++;
		else
			nu[num+4000]++;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int i = 1; i <= 8000; i++) {	//�ֺ��� ���ϱ� ���� ���� ���� ��Ÿ�� ���� ã��
		if (max < nu[i]) {				//max�� ���� ���� ��Ÿ�� ������ ��Ÿ�� Ƚ��
			max = nu[i];
		}
	}
	for (int i = 4000; i >= 0; i--) {	//��������
		if (max == nu[i]) {
			check++;
			if (check == 2) {
				n3 = -i;
				break;
			}
			n3 = -i;
		}
	}
	if (check != 2) {	//���������������� �ֺ��� �ι�°�� ���� ���� ����ϱ� ������ ������������ 
						//�ֺ��� �ι�°�� ���� ���� �ִٸ� ����������� ã�ƺ� �ʿ䰡 ���� ������
		for (int i = 4001; i <= 8000; i++) {	//�������
			if (max == nu[i]) {
				check++;
				if (check == 2) {
					n3 = i - 4000;
					break;
				}
				n3 = i - 4000;
			}
		}
	}
	n1 = (int)round(add /(double)n);	//�Ҽ�ù°�ڸ����� �ݿø� round �̿�
	n2 = v[v.size() / 2];			//�߾Ӱ�
	n4 = v[v.size() - 1] - v[0];	//������� ������ �������� ���� ó���� ��

	cout<< n1 << '\n' << n2 << '\n' << n3 << '\n' << n4;
	//������ �߾Ӱ� �ֺ� ����
}