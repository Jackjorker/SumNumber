#include<iostream>
using namespace std;
int main(){
    int a,b,c,sum;
    for(int i=100;i<1000;i++){
        a=i/100;//百位数字
        b=(i/10)%10;//十位数字
        c=i%10;//个位数字
        sum=a*a*a+b*b*b+c*c*c;
        if(i==sum)
        cout<<i<<endl;
    }
}