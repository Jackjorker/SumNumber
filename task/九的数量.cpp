#include<iostream>
using namespace std;
int main(){
    //����һ��1-100������
    int a;
    int count=0;
    cout<<"������һ��1-100������"<<endl;
    cin>>a;
    while (a<1||a>100)
    {
        cout<<"�����������������"<<endl;
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