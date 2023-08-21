#include<iostream>
using namespace std;
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

void WaveSort(int arr[], int n){
for(int i=0;i<n;i+=2){
if(i>0 && arr[i-1]>arr[i]){
swap(&arr[i],&arr[i-1]);
}
if(i<n-1 && arr[i]<arr[i+1]){
swap(&arr[i],&arr[i+1]);
}
}
}

int main(){
int arr[] = {1,2,3,4,5};
int i,j,n;
n = sizeof(arr)/sizeof(arr[0]);
WaveSort(arr, n);
for(int i = 0; i < n; i++){
cout<<arr[i]<<endl;
}
return 0;
}

