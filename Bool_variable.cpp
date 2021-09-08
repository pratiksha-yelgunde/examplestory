#include <iostream>
#include<typeinfo>
using namespace std;

int main()
{
   int a{100}; //a=100;
   int b{10}; //b=20;
   int r;
   bool p=a>b;                                    // p=a>b; p=a<b; p=a>=b; p=a<=b; p=a==b; p=a!=b;
   cout<<"p="<<p<<endl;
   cout<<"Typeid:"<<typeid(100>20).name()<<endl;
    return 0;
}
