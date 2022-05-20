#include<iostream>
using namespace std;

int main()
{
    // int anupam=10;
    // int *anu=&anupam;
    // cout<<anu<<endl;
    // cout<<*anu<<endl;
    // *anu=52;
    // cout<<*anu<<endl;
    // char c='a';
    // char *b=&c;
    // cout<<c<<endl;
    // cout<<b<<endl;
    // cout<<*b<<endl;
    //Double Pointer
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<&a<<endl;//0x76e61ff934
    cout<<p<<endl;//0x76e61ff934
    cout<<*q<<endl;//0x76e61ff934
  // it will print same value i.e address of p
    cout<<&p<<endl;
    cout<<q<<endl;
    //it will print the same value i.e value of a
    cout << a << endl;
    cout << * p << endl;
    cout << ** q << endl;
    //void pointer
    void *ptr;
    int i=10;

    ptr=&i;
    cout<<"Address of  variable i"<<&i<<endl;
    cout<<"address where the void pointer is pointing"<<ptr<<endl;
}