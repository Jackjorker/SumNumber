#include <iostream>

#include <cmath>
    using namespace std;
    bool prime(int num){
        int max=(int)sqrt((double)num),i;
        for(i=2;i<=max&&num%i;i++);
        if(i>max) return 1;
        else return 0;
    }
    int main(){
     int i;
     for(i=100;i<=200&&prime(i)==1;i++);
        cout<<i;
         for(i++;i<=200;i++)
         if(prime(i)) cout<<" "<<i;
        cout<<endl;
    return 0;
    }


