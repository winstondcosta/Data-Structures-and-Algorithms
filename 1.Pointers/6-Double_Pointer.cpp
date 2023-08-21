#include<iostream>
using namespace std;
int increment1(int **p){
p = p + 1;
}
int increment2(int **p){
*p = *p + 1;
}
int increment3(int **p){
**p = **p + 1;
}
int main(){
int i = 10;
int *p = &i;
int **p2 = &p;

cout<<*p2<<endl;
cout<<p<<endl;
cout<<&i<<endl;

cout<<**p2<<endl;
cout<<*p<<endl;
cout<<i<<endl;

cout<<p2<<endl;
increment1(p2);
cout<<p2<<endl;

cout<<*p2<<endl;
increment2(p2);
cout<<*p2<<endl;

cout<<**p2<<endl;
increment3(p2);
cout<<**p2<<endl;
return 0;
}
