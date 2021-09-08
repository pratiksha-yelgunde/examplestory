#include <iostream>

using namespace std;

int main()
{
    int var {}; //the garbage value is 0 bcz()=0
    cout << var <<endl;

    cout<< "Enter an integer value: ";
    cin >> var;

    cout<<"var:" << var<< endl;
    return 0;
}
