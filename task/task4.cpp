#include<iostream>
using namespace std;
int main(){
    int max,medium,small,m;
    cout<<"请输入三个数"<<endl;
    cin>>max>>medium>>small;
    if (small>=medium)
    {
       m=small;
       small=medium;
       medium=m;
    }
         if (max<=small)
        {
            m=max;
            max=small;
            small=m;
        }
            if(max<=medium){
            m=max;
            max=medium;
            medium=m;
        }
    
    
    cout<<max<<" "<<medium<<" "<<small<<" "<<m<<endl;
   

}