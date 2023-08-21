#include<iostream>
using namespace std;
int main(){
int a[]={1,2,3};
char c[]="abc";
cout<<sizeof(c)<<endl;
cout<<sizeof(a)<<endl;

cout<<a<<endl;
cout<<c<<endl;

char *p = &c[0];
cout<<p<<endl;

char c1= 'a';
char *cp = &c1;
cout<<cp<<endl;

return 0;
}
