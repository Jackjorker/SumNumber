/*详细了解命名空间的细节，知道命名空间的具体用法*/
#include<iostream>

using namespace std;//定义命名空间的标准声明，加分号

 namespace one{
    const int A=200;//常变量必须在给出定义的时候初始化值，之后不得对常变量进行更改
    int a=10; 
}//后面不用加分号

 namespace two{
    int x;//没有初始化x的值
    int b=-100;

}
//using namespace one ;
int main(){
    using two::x;
    x=100;
    using one::a ;
    using one::A;

    cout << a << endl;
    cout << A << endl;
    two::b*=3;
    cout << two::b << endl;
    cout << x << endl;
    cout <<"you wanna be a dreamer"<<endl;
    return 0;//int类型要有返回值
}

