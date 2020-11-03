#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, c;
	float n=0.00,sum=0.00;
	cout << "请输入三个整数" << endl;
	cin  >>  a  >>  b  >>  c;
	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	for (int j = 1; j <= b; j++) {
		sum = sum + j * j;
	}
	for (int m = 1; m <= c; m++) {
		n = 1.0/ m;//倒数之和需赋值给double变量，以及除数需要以小数形式表示
		sum = sum + n;
	}
	//sum = sum + d+e;
	cout << "三种情况之和为" << endl ;
	cout << fixed<<setprecision(2) << sum << endl;//保留两位小数需要用到有效位数函数，与fixed联用就是确定保留的小数位数
}