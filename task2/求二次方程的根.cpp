#include <iostream>

#include <cmath>
using namespace std;
int main() {
	int a, b, c;//���η��̵�ϵ��
	int x1, x2;//���η��̵ĸ�
	cout << "������������η��̵�ϵ�� a,b,c"<< endl;
	cin >> a >> b >> c;
	int judge=b*b-4*a*c;//�жϹ�ʽ����
	if (judge > 0) {
		cout << "����������" << endl;
		x1 = (sqrt(judge) - b) /( 2*a);
		x2= (-sqrt(judge) - b) / (2 * a);
		cout << x1<<"  "<<x2<< endl;
	}
	else if (judge == 0) {
		cout << "������һ��" << endl;
		x1 = x2 = b / (2 * a);
	
	}
	else 	cout << "������ʵ��" << endl;
	return 0;
}