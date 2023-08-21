#include<iostream>
using namespace std;
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

void selectionSort(int arr[], int n){
int temp = 0;
for(int i=0;i<n-1;i++){
    int min = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
           min = j; //index of min element
  }
}
swap(&arr[min], &arr[i]);
}
}

int main(){
int arr[] = {2,5,1,4,3};
int i,j,n,temp = 0;
n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, n);
for(int i = 0; i < n; i++){
cout<<arr[i]<<endl;
}
return 0;
}
