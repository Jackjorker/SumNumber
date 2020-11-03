#include <iostream>

#include <cmath>
using namespace std;
int main() {
	int a, b, c;//二次方程的系数
	int x1, x2;//二次方程的根
	cout << "请依次输入二次方程的系数 a,b,c"<< endl;
	cin >> a >> b >> c;
	int judge=b*b-4*a*c;//判断公式定义
	if (judge > 0) {
		cout << "方程有两根" << endl;
		x1 = (sqrt(judge) - b) /( 2*a);
		x2= (-sqrt(judge) - b) / (2 * a);
		cout << x1<<"  "<<x2<< endl;
	}
	else if (judge == 0) {
		cout << "方程有一根" << endl;
		x1 = x2 = b / (2 * a);
	
	}
	else 	cout << "方程无实根" << endl;
	return 0;
}