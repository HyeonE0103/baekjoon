#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int n, m, num = INT_MAX;
	vector <int> v,an;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i <n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (v[i] + v[j] + v[k] <= m)	
					an.push_back(v[i] + v[j] + v[k]);
				else
					break;	//�����߱⶧���� ���� M���� Ŀ���� �� �������� ���غ� �ʿ䰡 ����
			}
		}
	}
	sort(an.begin(), an.end());	//��¼�� M���Ϸ� �޾ұ� ������ ���������� ���� �������� �ִ� ����
								//M�� �����ʴ� M�� �ִ��� ������
	cout << an[an.size()-1] << '\n';
}