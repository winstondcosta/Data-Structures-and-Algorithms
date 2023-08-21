#include<iostream>
using namespace std;
int main(){
int i=10;
int *p = &i;
cout<<sizeof(p)<<endl;
cout<<p<<endl;
cout<<*p<<endl;
p++;
(*p)++;
cout<<p<<endl;
cout<<*p<<endl;
double j = 100.33;
double *dp = &j;
cout<<sizeof(dp)<<endl;
cout<<dp<<endl;
dp++;
cout<<dp<<endl;
return 0;
}
