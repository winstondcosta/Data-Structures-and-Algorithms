#include<iostream>
using namespace std;
bool isSorted(int a[],int n){
if(n==1){
return true;
}
if(a[0]<a[1] && isSorted(a+1,n-1)){
return true;
}
return false;
}

int main(){
int a[] = {1,2,13,4,5};
int n;
n = sizeof(a)/sizeof(int);
if(isSorted(a,n)){
cout<<"Is Sorted"<<endl;
}
else{
cout<<"Not Sorted"<<endl;
}
return 0;
}
