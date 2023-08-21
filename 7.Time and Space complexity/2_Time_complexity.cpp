#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;
int a[100000];
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
a[i] = n-1;
}
clock_t startTime = clock();
sort(a,a+n);
clock_t endTime = clock();
cout<<endTime-startTime<<endl;
return 0;
}
