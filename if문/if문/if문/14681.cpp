#include <iostream>
#include <climits>	//INT_MAX(int���� �ʴ� ��)�� �������� �߰� 
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (a == 0 || b == 0) {
		cout << "a�� b�� 0�� ������ ��"<<endl;
		cin.clear();     //  error flag ���� Ŭ���� ��Ŵ 
		cin.ignore(INT_MAX, '\n');  // ���� ���� ������ INT_MAX�� ��ŭ
								    // (�����) \n�� ������ ���� ���۸� ���� 
		cin >> a>> b;      // ���Է� 
	}
	if (a > 0 && b > 0)
		cout << "1" << endl;
	else if (a < 0 && b>0)
		cout << "2" << endl;
	else if (a < 0 && b < 0)
		cout << "3" << endl;
	else
		cout << "4" << endl;
	
}