#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"请输入两个整数"<<endl;
    cin>>a>>b;
    if(a==0||b==0)
    cout<<"两数的公约数为0"<<endl;
    if(a<b)             
    { 
        temp=a;
        a=b;
        b=temp;} //求最小值最大值，大的用a表示，小的用b表示
   while(b!=0)            //用循环求最大公约数
    {
      temp=a%b;
      a=b;             
      b=temp;
    }
        cout<<a;            //返回最大公约数
}
