#include<iostream>
using namespace std;
int main(){
int a[10];
a[0]=5;
a[1]=10;
cout<<a<<endl;
cout<<&a[0]<<endl;

cout<<*a<<endl;
cout<<*(a+1)<<endl;

int *p = &a[0];

cout<<sizeof(p)<<endl;
cout<<sizeof(a)<<endl;

cout<<&p<<endl;
cout<<&a<<endl;

//p = p+1;
p = a+2;
cout<<p<<endl;
return 0;
}
