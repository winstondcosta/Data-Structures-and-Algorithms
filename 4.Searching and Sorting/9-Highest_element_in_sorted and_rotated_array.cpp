#include<iostream>
using namespace std;

int binarySearch(int a[],int n){
int s=0,e=n-1;
while(s<=e){
int mid = (s+e)/2;
if(mid<e && a[mid]>a[mid+1]){
return mid;
}
else if(mid>0 && a[mid-1]>a[mid]){
return mid-1;
}
if(a[s]>=a[mid]){
e = mid-1;
}
else{
s = mid+1;
}
}
return -1;
}


int main(){
int a[] = {6,7,8,1,2,3,4,5};
int n = sizeof(a)/sizeof(int);
int res = 0;
res = binarySearch(a,n);
if(res!=-1){
cout<<"Pivot found at index "<<res<<endl;
}
else{
cout<<"pivot not found"<<endl;
}
return 0;
}

