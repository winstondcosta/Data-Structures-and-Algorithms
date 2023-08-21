#include<iostream>
using namespace std;
int search(int a[],int s,int e,int key){
if(s>e){
return -1;
}
int mid = (s+e)/2;
if(a[mid]==key){
return mid;
}
//Left part
if(a[s]<a[mid]){
if(key>=a[s] && key<=a[mid]){
    return search(a,s,mid-1,key);
}
else{
    return search(a,mid+1,e,key);
}
}
//right part
if(key>=a[mid] && key<=a[e]){
    return search(a,mid+1,e,key);
}
else{
    return search(a,s,mid-1,key);
}
}

int main(){
int a[] = {6,7,1,2,3,4,5};
int n = sizeof(a)/sizeof(int);
int key, res = 0;
cin>>key;
res = search(a,0,n-1,key);
if(res!=-1){
cout<<key<<" found at index "<<res<<endl;
}
else{
cout<<"key not found"<<endl;
}
return 0;
}

