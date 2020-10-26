#include<iostream>
using namespace std;
int main(){
    //输入一个1-100的整数
    int a;
    int count=0;
    cout<<"请输入一个1-100的整数"<<endl;
    cin>>a;
    while (a<1||a>100)
    {
        cout<<"输入错误，请重新输入"<<endl;
        cin>>a;
    }
    for (int  i = 0; i <=a; i++)
    {
        if (i/10==9)
        count++;
        if(i%10==9)
        count++;
    }
    cout<<count<<endl;
    
}