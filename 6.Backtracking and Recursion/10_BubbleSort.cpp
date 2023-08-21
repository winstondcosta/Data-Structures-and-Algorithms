#include<iostream>
using namespace std;
void bubbleSort(int a[],int j,int n){
if(n==1){
return;
}
if(j==n-1){
return bubbleSort(a,0,n-1);
}
if(a[j]>a[j+1]){
swap(a[j],a[j+1]);
}
return bubbleSort(a,j+1,n);
}

int main(){
int a[] = {1,3,5,7,4,6};
int n = sizeof(a)/sizeof(int);
bubbleSort(a,0,n);
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}

