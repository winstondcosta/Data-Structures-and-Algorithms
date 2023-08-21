#include<iostream>
using namespace std;
int main(){
int i=10;
int *p = &i;
int b = i;
int *q = p;
cout<<q<<endl;
cout<<&b<<endl;

cout<<sizeof(i)<<endl;
cout<<&i<<endl;
cout<<sizeof(p)<<endl;
cout<<p<<endl;

cout<<i<<endl;
cout<<*p<<endl;

i++;
cout<<i<<endl;
cout<<*p<<endl;

int a = i;
a++;
cout<<a<<endl;
cout<<*p<<endl;

(*p)++;
cout<<*p<<endl;

//null pointer
int x=0;
x++;
cout<<x<<endl;
int *y=0;
cout<<y<<endl;
cout<<*y<<endl;
(*y)++;
cout<<*y<<endl;
return 0;
 }
