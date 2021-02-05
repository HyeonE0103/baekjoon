#include<iostream>
#include<algorithm>	//lower_bound, upper_bound, sort
					//�տ� 2���� ����Ž������ ���Ҹ� Ž���ϴ� �Լ�, �������� �����Լ�
#include<vector>	
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first)			//������ �ð��� ���� ������
		return a.first < b.first;	//������  �ð��� ������ ����
	else
		return a.second < b.second;	//������ �ð��� ���ٸ� ���۽ð��� �����ͺ���
}

int main() {
	int n, a, b;
	ios_base::sync_with_stdio(false);	//�ӵ� �⼧�� ����, ��Ʈ�� ����ȭ ����
	cin.tie(NULL), cout.tie(NULL);		//�� IO�۾����� flush�� ������ ���� ����
	cin >> n;
	vector<pair<int, int>>v;	//pair�� �ΰ��� ��ü�� �����ִ� ����
	for (int i = 0; i < n; i++) {	//vector�� �����̳� ���� ��Ȱ�� 
		cin >> a >> b;				//�޸� �Ҵ�� ������ ���ִ� �迭���� ����
		v.push_back({ b,a });	//fist�� ������ �ð�, second�� ���۽ð�
	}
	sort(v.begin(), v.end(), com);	//sort(�迭�� �����ּ�, �迭�� ������ �ּ�)
								//������� �����Ѵٰ� ������� ������ ���� �ƴϱ� ������ ������ �ð����� ����
	a = 0, b = 0;				//a = ������ �ð�(=���ð�), b = ȸ���� �ִ� ����
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second < a)	//a�� ������ �ð�, ȸ�ǽ��� ���ÿ� ����Ҽ� ������
			continue;			//���۽ð��� ������ �ð����� ���� �� ����. ���ο� ���̸� ã���� continue
		a = v[i].first;		
		b++;
	}
	cout << b;
}