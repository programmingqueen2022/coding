#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int main()
{
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"the function returned to "<<add(a,b)<<endl;
    cout<<"the function returned to "<<sub(a,b)<<endl;


    return 0;
}