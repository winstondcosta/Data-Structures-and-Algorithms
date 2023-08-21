#include<iostream>
using namespace std;
int main(){
int n, a[20], r[20], l[20], lmax = 0, rmax = 0, count = 0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}
l[0]=a[0];
r[-1]=a[n-1];
for(int i=1;i<n;i++){
lmax = max(lmax,a[i]);
l[i] = lmax;
}
for(int i=(n-1);i>=0;i--){
rmax = max(rmax,a[i]);
r[i] = rmax;
}
for(int i=0; i<n; i++){
count = count + (min(l[i],r[i]) - a[i]);
}
cout<<count;
return 0;
}
