#include<iostream>
using namespace std;
int Sum(int args){
    int sum;
    if(args>9) return 0;
    else sum =args+(args*10+args)+(args*100+args*10+args)+(args*1000+args*100+args*10+args);
    return sum;
}
int main(){
    int i;
    int result;
    cout<<"������һ��10��������"<<endl;
    cin>>i;
    while (i>9)
    {
        cout<<"�������"<<endl;
        cout<<"����������ʮ���ڵ�����"<<endl;
        cin>>i;
    }
    /*(i>9) {
        cout<<"�������"<<endl;
        cout<<"����������ʮ���ڵ�����"<<endl;
        cin>>i;
        }*/
    result=Sum(i);
   // result=Sum(i);
    cout<<result<<endl;
    return 0;
}