#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n){
if(n==1){
return false;
}
for(int i=2;i*i<=n;i++){
if(n%i==0){
return false;
}
}
return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=0;
cin>>t;
for(int i=0;i<t;i++){
ll m,n;
cin>>m>>n;
for(int i=m;i<=n;i++){
if(isPrime(i)){
cout<<i<<endl;
}
}
}
return 0;
}
