#include<iostream>
using namespace std;
int main(){
char a[] = {'a','b','c','\0'};
char b[] = "abc";
char c[5];
cout<<a<<endl;
cout<<sizeof(a)<<endl;
cout<<b<<endl;
cout<<sizeof(b)<<endl;
cout<<c<<endl;
cout<<sizeof(c)<<endl;

char d[100];
cin.getline(d,1000,'.');
cout<<d<<endl;
cout<<sizeof(d)<<endl;
return 0;
}
