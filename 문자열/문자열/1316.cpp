#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, num=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a[26] = { 0, };
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] != s[j + 1]) {	//�վ��ĺ��� �ھ��ĺ��� �ٸ��� �� ���ĺ� ��ġ�� �迭 ���� �߰���
				a[s[j]-'a']++;	//�������� ���ĺ��� ������ �迭�� �߰����� ����
			}					//�������� ������ �迭 ���� �������� 1�ʰ� �ϰ�
		}
		for (int j = 0; j < 26; j++) {
			if (a[j] > 1) {
				num++;
				break;
			}
		}
	}
	cout << n - num << endl;
}