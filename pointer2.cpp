#include<iostream>
using namespace std;

void func(int **q){
  q=q+1;
}
void func1(int **q)
{
    
}
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<&p<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&q<<endl;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;
    cout<<"Before"<<q<<endl;
    cout<<"Before"<<*q<<endl;
    cout<<"Before"<<**q<<endl;
    func


    
    //12 level we go in pointer

}