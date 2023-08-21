#include<iostream>
using namespace std;
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

void bubblesort(int arr[], int n){
int temp = 0;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(&arr[j], &arr[j+1]);
  }
}
}
}

int main(){
int arr[] = {2,5,1,4,3};
int i,j,n,temp = 0;
n = sizeof(arr)/sizeof(arr[0]);
bubblesort(arr, n);
for(int i = 0; i < n; i++){
cout<<arr[i]<<endl;
}
return 0;
}
