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
for(int i=n;i<2*n;i++){
m[arr2[i-n]] = i;
}
for(auto node:m){
cout<<node.first<<" : "<<node.second<<endl;
}
return 0;
}
