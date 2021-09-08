#include <iostream>

using namespace std;

int main()
{
    int age {};
    cout<<"Enter an age :";
    cin>>age;
    if(age>=13 && age <=19)
    {
        cout<<"Yes, the given age is teen age!!!"<<endl;
    }
    else
    {
        cout<<"No,the given age is not teen age:"<<endl;

    }

    return 0;
}
