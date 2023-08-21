#include<iostream>
using namespace std;
int binarySearch(int a[],int s,int e,int key){
int mid = (s+e)/2;
if(s<=e){
if(a[mid]==key){
return mid;
}
if(a[mid]>key)
    return binarySearch(a,s,mid-1,key);

return binarySearch(a,mid+1,e,key);
}
return -1;
}

int main(){
int a[] = {1,2,4,6,7,9};
int n = sizeof(a)/sizeof(int);
int key;
cin>>key;
cout<<binarySearch(a,0,n-1,key);
return 0;
}

