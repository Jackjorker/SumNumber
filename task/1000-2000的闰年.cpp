#include<iostream>
using namespace std;
int main(){
    
    int year=1000;
    while(year<=2000)
        {
        if((year%4==0&&year%100 !=0)||(year%400 ==0))
            {
                    cout<<year<<endl;
            }
                year= year+1;
            }
        }
