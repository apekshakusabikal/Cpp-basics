#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=23;
    char c='f';
    float k=51.200;

    cout<<"\nthe value of with setw a="<<setw(4)<<a;
    cout<<"\nthe value of with setw c="<<setw(7)<<c;
    cout<<"\nthe value of with setw k="<<setw(10)<<k;
    cout<<"\nthe value of without setw a="<<a<<endl;
    cout<<"\nthe value of without setw c="<<c<<endl;
    cout<<"\nthe value of without setw k="<<k<<endl;
}
