#include<iostream>
using namespace std;
int main() {
	int n, mul=1,sum=0;
	cout << "������n�Ĵ�С" <<  endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n-i; j >= 1; j--) {
			mul = mul * j;
		}
		sum = sum + mul;
		mul = 1;
	}
	cout << "�׳�֮��Ϊ" << sum << endl;
}