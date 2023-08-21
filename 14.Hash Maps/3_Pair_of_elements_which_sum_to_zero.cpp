#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,int> m;
int arr[] = {1,3,-2,6,2,7,-3};
int n = sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++){
m[arr[i]] = i;
}
for(auto node:m){
cout<<node.first<<" : "<<node.second<<endl;
}
for(int i=0;i<n;i++){
if(m.count(arr[i]) == m.count(((-1)*arr[i]))){
cout<<arr[i]<<","<<(-1)*arr[i]<<endl;
}
}
return 0;
}
