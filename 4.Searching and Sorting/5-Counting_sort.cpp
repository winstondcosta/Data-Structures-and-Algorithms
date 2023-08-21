#include<bits/stdc++.h>
using namespace std;
/*
int main(){
int arr[] = {7, 8, 4, 2, 1, 5};
int count = 0;
int n = sizeof(arr)/sizeof(arr[0]);
int freq[10] = {0};
for(int i = 0;i<n;i++){
freq[arr[i]]++;
}
for(int i = 0; i < 10; i++){
while(freq[i]!=0){
arr[count] = i;
count++;
freq[i]--;
}
}
for(int i = 0; i < n; i++){
cout<<arr[i]<<endl;
}
return 0;
}
*/
int main(){
 string arr = "geeksforgeeks";
 //int arr[] = {7, 8, 4, 2, 1, 5};
 //int n = sizeof(arr)/sizeof(arr[0]);
 char output[arr.length()];
 //int output[n];
 int freq[256];
 memset(freq, 0, sizeof(freq));
 for(int i=0;arr[i];i++){
    freq[arr[i]]++;
 }
 for(int i=1;i<256;i++){
    freq[i] += freq[i-1];
 }
 for(int i=0;arr[i];i++){
    output[freq[arr[i]]-1] = arr[i];
    freq[arr[i]]--;
 }
 for(int i=0;arr[i];i++){
    arr[i] = output[i];
 }
 cout<<arr<<endl;
 return 0;
}
