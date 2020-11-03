#include<iostream>
using namespace std;
int main() {
	//完数是一个数如果恰好等于不包含它本身所有因子之和
	int sum=0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = i-1; j > 0; j--) {
			if (i % j == 0)
				sum = sum + j;
		}
		if (sum == i)cout << sum<<" ";//输出完数
		sum = 0;//重新将sum定义为0
	}
	return 0;
}