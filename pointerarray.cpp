#include<iostream>
using namespace std;

void fun(int *p)
{
    *p=*p+1;
}
int main()
{
    int arr[]={1,2,3};
    int arr2[]={1,2,3,4,5};
    cout<<arr<<endl;//store hexadecimal Address
    cout<<*arr<<endl;//1 *arr= *arr+0
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<*arr2<<endl;
    cout<<*arr2+1<<endl;
    cout<<*arr2+2<<endl;
    cout<<*arr2+3<<endl;
    cout<<*arr+4<<endl;
    // bot are same 
    int i=0;
    cout<<i[arr]<<endl; 
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