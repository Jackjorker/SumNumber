#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, c;
	float n=0.00,sum=0.00;
	cout << "��������������" << endl;
	cin  >>  a  >>  b  >>  c;
	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	for (int j = 1; j <= b; j++) {
		sum = sum + j * j;
	}
	for (int m = 1; m <= c; m++) {
		n = 1.0/ m;//����֮���踳ֵ��double�������Լ�������Ҫ��С����ʽ��ʾ
		sum = sum + n;
	}
	//sum = sum + d+e;
	cout << "�������֮��Ϊ" << endl ;
	cout << fixed<<setprecision(2) << sum << endl;//������λС����Ҫ�õ���Чλ����������fixed���þ���ȷ��������С��λ��
}