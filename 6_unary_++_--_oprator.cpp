#include <iostream>

using namespace std;

int main()
{
    int x{10};
    int p;
    cout<<"x="<<x<<endl;      //x--; x=x-1
    p=x-1;                   //++x, x=x+1;
    cout<<"x="<<x<<endl;     //++5, 5=5+1;
    cout<<"p="<<p<<endl;
    return 0;
}
