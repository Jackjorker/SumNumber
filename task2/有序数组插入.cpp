#include<iostream>
using namespace std;
int main() {
	cout << "������һ���������������" << endl;
	int a[11];
	int num;
	int temp;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cout << "��������Ҫ���������" << endl;
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