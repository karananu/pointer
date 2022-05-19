#include<iostream>
using namespace std;

void fun(int *p)
{
    *p=*p+1;
}
int main()
{
    // int a=5;
    // int *p=&a;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // //cout<<*a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    int a=5;
    int *p=&a;
    cout<<"Before"<<p<<endl;
    cout<<"Before"<<*p<<endl;
    fun(p);
    cout<<"after"<<p<<endl;
    cout<<"before"<<*p<<endl;
}