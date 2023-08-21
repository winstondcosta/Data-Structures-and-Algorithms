#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,int> m;
int arr1[] = {1,3,2,5,7};
int arr2[] = {2,5,6,9,11};
int n = sizeof(arr1)/sizeof(int);
for(int i=0;i<n;i++){
m[arr1[i]] = i;
}
for(auto node:m){
cout<<node.first<<" : "<<node.second<<endl;
}
//Intersection
cout<<"Intersection: "<<endl;
for(int i=0;i<n;i++)
if(m.count(arr2[i])==1){
cout<<arr2[i]<<" ";
}
cout<<endl;
//Union
for(int i=0;i<n;i++){
m[arr2[i]] = i;
}
cout<<"Union :"<<endl;
for(auto node:m){
cout<<node.first<<" ";
}
return 0;
}
