#include<iostream>
using namespace std;
/*
int main(){
int a[10];
int n, csum=0, msum=0;
cin>>n;
//int a[10]={1,2,3,4,5};
//Taking input
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
csum = csum + a[i];
if(csum<0){
csum = 0;
}
msum= max(csum, msum);
}
cout<<msum<<endl;
return 0;
}
*/

int main(){
int arr[10]= {1,-2,3,4,-5};
int n = sizeof(arr)/sizeof(int);
int csum=0,msum=0,start=0,end=0,beg=0;
for(int i=0;i<n;i++){
csum = csum + arr[i];
if(csum<0){
    csum = 0;
    beg = i+1;
}
if(msum<csum){
    msum = csum;
    start = beg;
    end = i;
}
}
cout<<msum<<endl;
for(int i=start;i<=end;i++){
cout<<arr[i]<<" ";
}
return 0;
}
