#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"��������������"<<endl;
    cin>>a>>b;
    if(a==0||b==0)
    cout<<"�����Ĺ�Լ��Ϊ0"<<endl;
    if(a<b)             
    { 
        temp=a;
        a=b;
        b=temp;} //����Сֵ���ֵ�������a��ʾ��С����b��ʾ
   while(b!=0)            //��ѭ�������Լ��
    {
      temp=a%b;
      a=b;             
      b=temp;
    }
        cout<<a;            //�������Լ��
}
