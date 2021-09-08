#include <iostream>
#include<typeinfo>
using namespace std;

int main()
{
 auto myvar=9.5;
 auto myIntvar=0;
 cout<< "Type of myvar:"<<typeid(myvar).name() <<endl;
 cout<<"Type of myIntvar:" <<typeid(myIntvar).name() <<endl;
return 0;
}
