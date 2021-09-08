#include <iostream>

using namespace std;

int main()
{
    int age{15}; // NOT is unary operator
    bool r=!(age >= 13 && age <= 19);
    cout<<" r= "<< r <<endl;
    return 0;
}
