#include<iostream>
using namespace std;

int main()
{
    int anu=5;
    cout<<anu<<endl;//pointer - store address
    //address of operator-&
    cout<<"address of anu is"<<&anu<<endl;
     int *ptr=&anu;
     //creat a pointer
     
    cout<<*ptr<<endl;
     cout<<ptr<<endl;
     //here * anu is defrence opeartor
     double d=4.3;
     double *p2=&d;
     cout<<p2<<endl;
     cout<<*p2<<endl;
     cout<<sizeof(anu)<<endl;
     cout<<sizeof(ptr)<<endl;
     cout<<sizeof(p2)<<endl;
    return 0;
}