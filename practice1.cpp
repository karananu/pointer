#include<iostream>
using namespace std;

// void update(int *p)
// {
//     *p=(*p)*2;
// }
void increament(int **p){
    ++(**p);
}
int main()
{
//    int first=8;
//    int second=18;
//    int *ptr=&second;
//    *ptr=9;
//    cout<<first<<" "<<second<<endl;//8 ,9

//    int first=6;
//    int *p=&first;
//    int *q=p;
//    (*q)++;
//    cout<<first<<endl;//7
//   int first =8;
//   int *p=&first;
//   cout<<(*p)++<<" ";
//   cout<<first<<endl;
//    return 0; //8 9
//  int *p=0;
//  int first=110;
//  *p=*first;  //segmentation fault
//  cout<<*p<<endl;
// int first=8;
// int second=11;
// int *third=&second;
// first=*third;
// *third=*third+2;
// cout<<first<< " "<<second<<endl;//11 13
// float f=12.5;
// float p=21.5;
// float *ptr=&f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<" "<<f<<" "<<p<<endl;//21.5 21.5 21.5
// int arr[5];
// int *ptr;
// cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;// 20 8
// int arr[]={11,21,13,14};
// cout<<*(arr)<<" "<<*(arr+1)<<endl;//11 21
// int arr[6]={11,12,31};
// cout<<arr<<" "<<&arr<<endl;//starting address
// int arr[6]={11,21,13};
// cout<<(arr+1)<<endl;//address of location 
// int arr[6]={11,21,31};
// int *p=arr;
// cout<<p[2]<<endl;//31
// int arr[]={11,12,13,14,15};
// cout<<*(arr)<<" "<<*(arr+3);//11 14
// int arr[]={11,21,31,41};
// int *ptr=arr++;//symbol table not update
// cout<<*ptr<<endl;
// char a='a';
// char *ptr=&a;
// a++;
// cout<<*ptr<<endl;//b
// char arr[]="abcde";
// char *p=&arr[0];
// cout<<p<<endl;//abcde
// char arr[]="abcde";
// char *p=&arr[0];
// p++;
// cout<<p<<endl;//bcde
//  char str[]="babbar";
//  char *p=str;
//  cout<<str[0]<<" "<<p[0]<<endl;//b b

// int i=10;
// update(&i);
// cout<<i<<endl;//20

// int first=110;
// int *p=&first;
// int **q=&p;
// int second=(**q)++ +9;
// cout<<first<<" "<<second<<endl;//111 119
// int first=100;
// int *p=&first;
// int **q=&p;
// int second=++(**q);
// int *r=*q;
// ++(*r);
// cout<<first<<" "<<second<<endl;//102 101
int num=110;
int *ptr=&num;
increament(&ptr);
cout<<num<<endl;

}
