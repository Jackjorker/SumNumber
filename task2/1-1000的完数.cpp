#include<iostream>
using namespace std;
int main() {
	//������һ�������ǡ�õ��ڲ�������������������֮��
	int sum=0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = i-1; j > 0; j--) {
			if (i % j == 0)
				sum = sum + j;
		}
		if (sum == i)cout << sum<<" ";//�������
		sum = 0;//���½�sum����Ϊ0
	}
	return 0;
}