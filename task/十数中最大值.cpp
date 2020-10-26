#include<iostream>
using namespace std;
int main(){
    int a[10];
    int max=0;
    cout <<"请输入十个整数"<<endl;
    for(int j=0;j<10;j++){
        cin>>a[j];

    }
    
    max=a[0];
    for (int i = 1; i < 10; i++)
    {
         if (max<a[i])
        {
           max=a[i];
        }
    }
    
    //int max=a[9]; 
    cout<<max<<endl;

}