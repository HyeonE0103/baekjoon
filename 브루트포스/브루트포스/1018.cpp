#include <iostream>
#include <climits>
#include <string>
using namespace std;

int cor = INT_MAX;	//���������� �ؾ� �Լ����� �ٲٱ� ����
string board[50];	//�ִ� 50

string wb[8] = {	//������� �����ϴ� ü����
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"}
};
string bb[8] = {	//�������� �����ϴ� ü����
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"}
};

void comwb(int x, int y) {
	int num = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (wb[i][j] != board[y + i][x + j])	//����� ü���� ��
				num++;
		}
	}
	if (num < cor)	//�� ���� ��ĥ�Ѵٸ� �ٲ���
		cor = num;
}

void combb(int x, int y) {
	int num = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (bb[i][j] != board[y + i][x + j])	//����� ü���� ��
				num++;
		}
	}
	if (num < cor)
		cor = num;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];
	for (int x = 0; x < m - 7; x++) {	//8*8 ü������ ����� ���̱� ������ �񱳴� 8*8�� �ϸ��
		for (int y = 0; y < n - 7; y++) {	//�Ѱ��� �÷����� ���ϴ� �簢���� �ٲ���
			comwb(x, y);
			combb(x, y);
		}
	}
	cout << cor;
	return 0;
}