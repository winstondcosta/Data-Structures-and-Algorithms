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
//Enter key
int key;
cin>>key;
int i;
for(i=0;i<n;i++){
if(a[i]==key){
cout<<key<<" found at index "<<i<<endl;
break;
}
}
if(i==n){
cout<<key<<" Not found"<<endl;
}
return 0;
}
