#include<iostream>
using namespace std;
int main(){
int arr[] = {2,5,1,4,3};
int i,j,n,temp = 0;
n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
  }
}
}
for(int i = 0; i < n; i++){
cout<<arr[i]<<endl;
}
return 0;
}

