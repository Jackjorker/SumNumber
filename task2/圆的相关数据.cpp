#include <iostream>
#include<cmath>
#define pai 3.1415
using namespace std;
int main() {
	int r = 1.5, h = 3,m;
	cout << "����������Ҫ���Բ������" << endl;
	cout << "��1��ΪԲ���ܳ���" << endl;
	cout << "��2��ΪԲ�������" << endl;
	cout << "��3��ΪԲ��������" << endl;
	cout << "��4��ΪԲ�������" << endl;
	cout << "��5��ΪԲ�����" << endl;
	
	double c = 2 * pai * r;
	double s = pai * r * r;
	double S = 4*pai*r*r;
	double v = 4 / 3 * pai * r * r * r;
	double V = s*h;
	cin >> m;
	switch (m)
	{
	case 1:cout << "Բ���ܳ�Ϊ" <<  c << endl;
	case 2:cout << "Բ�����Ϊ" << s  << endl;
	case 3:cout << "Բ������Ϊ" <<  S  << endl;
	case 4:cout << "Բ�����Ϊ" <<  v  << endl;
	case 5:cout << "Բ�����Ϊ" << V << endl;
	default:
		break;
	}
}