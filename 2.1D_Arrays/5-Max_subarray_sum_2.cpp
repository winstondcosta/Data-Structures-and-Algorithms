#include<iostream>
using namespace std;
int main(){
int a[10];
int n, cursum, maxsum=0, left=0, right=0;
cin>>n;
//int a[10]={1,2,3,4,5};
//Taking input
cin>>a[0];
int csum[100] = {0};
csum[0] = a[0];
for(int i=1;i<n;i++){
cin>>a[i];
csum[i] = csum[i-1] + a[i];
}
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
cursum = 0;
cursum = csum[j] - csum[i-1];
//cursum>maxsum
if(cursum>maxsum){
maxsum = cursum;
left = i;
right = j;
}
}
}
cout<<maxsum<<endl;
for(int k=left;k<=right;k++){
cout<<a[k]<<" ";
}
return 0;
}


