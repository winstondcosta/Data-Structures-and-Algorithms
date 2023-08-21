#include<iostream>
using namespace std;
int main(){
int a[10];
int n;
cin>>n;
//int a[10]={1,2,3,4,5};
//Taking input
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
for(int k=i;k<=j;k++){
cout<<a[k]<<" ";
}
cout<<endl;
}
}

return 0;
}

