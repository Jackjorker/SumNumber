#include<iostream>
using namespace std;
int main() {
	cout << "请输入一串有序的数组序列" << endl;
	int a[11];
	int num;
	int temp;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cout << "请输入需要插入的数字" << endl;
	cin >> num;
	for (int j = 0; j < 10; j++) {
		if (num <= a[j]) {
			temp = a[j];
			a[j] = num;
			num = temp;
		}
	
		cout << a[j] << " ";
	}
	return 0;
}