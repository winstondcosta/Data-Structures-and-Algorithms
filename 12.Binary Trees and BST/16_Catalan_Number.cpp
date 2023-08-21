#include<bits/stdc++.h>
using namespace std;
int catalan(int n){
if(n==0){
    return 1;
}
int ans=0;
for(int i=1;i<=n;i++){
ans += catalan(i-1)*catalan(n-i);
}
return ans;
}

int fact(int n){
if(n==0){
    return 1;
}
return n*fact(n-1);
}

int main(){
int n,f=1,res=0;
cin>>n;
for(int i=0;i<=n;i++){
if(i==n){
res = catalan(i);
cout<<"Total number of possible BST for "<<i<<" nodes is "<<catalan(i)<<endl;
}
}
f = fact(n);
cout<<"Total number of possible Binary trees for "<<n<<" nodes is "<<f*res<<endl;
return 0;
}
