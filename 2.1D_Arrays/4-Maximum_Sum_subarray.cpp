#include<iostream>
using namespace std;
int main(){
int a[10];
int n, cursum, maxsum=0, left=0, right=0;
cin>>n;
//int a[10]={1,2,3,4,5};
//Taking input
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
cursum = 0;
for(int k=i;k<=j;k++){
cursum += a[k];
}
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

