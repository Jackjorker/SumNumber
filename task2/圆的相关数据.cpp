#include <iostream>
#include<cmath>
#define pai 3.1415
using namespace std;
int main() {
	int r = 1.5, h = 3,m;
	cout << "请输入你想要求的圆的数据" << endl;
	cout << "“1”为圆的周长；" << endl;
	cout << "“2”为圆的面积；" << endl;
	cout << "“3”为圆球表面积；" << endl;
	cout << "“4”为圆球体积；" << endl;
	cout << "“5”为圆柱体积" << endl;
	
	double c = 2 * pai * r;
	double s = pai * r * r;
	double S = 4*pai*r*r;
	double v = 4 / 3 * pai * r * r * r;
	double V = s*h;
	cin >> m;
	switch (m)
	{
	case 1:cout << "圆的周长为" <<  c << endl;
	case 2:cout << "圆的面积为" << s  << endl;
	case 3:cout << "圆球表面积为" <<  S  << endl;
	case 4:cout << "圆球体积为" <<  v  << endl;
	case 5:cout << "圆柱体积为" << V << endl;
	default:
		break;
	}
}