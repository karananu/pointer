 #include<iostream>
 using namespace std;
 int main()
{
//  int a = 7;
// int *c = &a;
// c = c + 1;
// cout  << a << "  " << *c << endl;//here c has garbage value
// double a = 10.54;
// double *d = &a;
// d = d + 1;
// cout  << d << endl;

  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;

}