#include<iostream>
using namespace std;

void update(int **p){
    //p=p+1;
    //kuch chaneg hoga- no change
     //*p=*p+1;// yec change
    **p=**p+1; //6
    //kuch chaneg hoga

}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"Sab Sahi chal raha hi"<<endl;
    cout<<"printing p"<<p<<endl;//0xb8b5ff844
    cout<<"address of p"<<&p<<endl;//0xb8b5ff844

    // cout<<*p2<<endl;
    // cout<<i<<endl;//5
    // cout<<*p<<endl;//5
    // cout<<**p2<<endl;//5
    // cout<<&i<<endl;//0xede35ff784
    // cout<<p<<endl;//0xede35ff784
    // cout<<*p2<<endl;//0xede35ff784
    // cout<<&p<<endl;//0x9a801ffaf8
    // cout<<p2<<endl;//0x9a801ffaf8
    cout<<endl<<endl;
    cout<<"before"<<i<<endl;
    cout<<"befor"<<p<<endl;
    cout<<"before"<<p2<<endl;
    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
 }