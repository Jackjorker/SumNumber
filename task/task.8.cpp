#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i;
    float sum=0.0,temp=0.0;
    for (i = 1; i <= 100; i++)
    {
        temp = pow(-1, i + 1);
        sum = sum + temp * 1 / i;
    }
    cout<<"������Ϊ";
    cout<<sum<<endl;
    return 0;
}