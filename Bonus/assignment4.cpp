#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swaping your fisrt number is"<<a<<endl;
    cout<<"after swaping your second number is"<<b<<endl;
    return 0;
}

