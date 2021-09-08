#include <iostream>
#include<typeinfo>

using namespace std;

int main()
{
    int age{10};
    signed x;
    cout<<"age is:" << age << endl;
    double rate_of_interest{0.07};
    cout<<"Rate of interest:"<< rate_of_interest<<endl;
    auto myvar = 9.5;   //Auto - initialize for variables
    auto myIntvar = 0;

    cout<<"Type of myVar:"<<typeid(myvar).name() << endl;         //double 0.07 -output
    cout<<"Type of myIntVar:" << typeid(myIntvar).name() << endl;

    return 0;
}
