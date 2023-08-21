#include<iostream>
using namespace std;
int main(){
int a[10];
//int a[10]={1,2,3,4,5};
//Taking input
for(int i=0;i<10;i++){
cin>>a[i];
}
//update
for(int i=0;i<10;i++){
a[i]=a[i]*a[i];
}
for(int i=0;i<10;i++){
cout<<a[i]<<" ";
}
cout<<endl;
//reverse
for(int i=9;i>0;i--){
cout<<a[i]<<" ";
}
return 0;
}
