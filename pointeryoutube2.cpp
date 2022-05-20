#include<iostream>
using namespace std;

int main()
{
    //pointer to int is created and pointing to some garbase address
    // int *p=0;
    // cout<<*p<<endl;
    // int i=5;
    // int *p=&i;
    // cout<<p<<endl;
   
    // int i=5;
    // int *q=&i;
    // cout<<*q<<endl;
    // cout<<q<<endl;
    // int *p=0;//two ways to acccess a pointer
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    int anu=5;
    int a=anu;
    cout<<"before"<<anu<<endl;
    a++;
      cout<<"After"<<anu<<endl;
    cout<<anu<<endl;
    int *p=&anu;
    cout<<"before"<<anu<<endl;//5
    (*p)++; //increased the value of pointer to 1
    cout<<"after"<<anu<<endl;//6
   //copying a pointer
    int *q=p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    //importand concept
    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<*t++<<endl;
    cout<<i<<endl;
    cout<<*t<<endl;


}