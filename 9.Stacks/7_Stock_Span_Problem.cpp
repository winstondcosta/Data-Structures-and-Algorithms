#include<bits/stdc++.h>
using namespace std;
void stockSpan(int arr[],int n){
stack<int> s;
int betterday = 0;
int ans[100];
for(int i=0;i<n;i++){
while(!s.empty() && arr[s.top()]<arr[i]){
s.pop();
}
if(s.empty()){
    betterday = 0;
}
else{
    betterday = s.top();
}
int span = i - betterday;
ans[i] = span;
s.push(i);
}
for(int i=0;i<n;i++){
cout<<ans[i]<<" ";
}
}
using namespace std;
int main(){
int arr[] = {100,80,60,70,60,75,85};
int n = sizeof(arr)/sizeof(int);
stockSpan(arr,n);
return 0;
}

