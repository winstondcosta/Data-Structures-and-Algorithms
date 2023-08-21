#include<bits/stdc++.h>
using namespace std;
#define ll long long int
/*
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
int n=0;
cin>>n;
if(isPrime(n)){
cout<<n<<" is prime number"<<endl;
}
else{
cout<<n<<" is not a prime number"<<endl;
}
return 0;
}
*/
//Check for N prime numbers
int main(){
ll m,n;
cin>>m>>n;
ll p[n+1];
memset(p,0,sizeof(p));
p[0]=p[1]=0;
p[2] = 1;
for(ll i=3;i<=n;i+=2){
p[i]=1;
}
for(ll i=3;i<=n;i+=2){
if(p[i]){
for(ll j=i*i;j<=n;j+=i*2){
p[j]=0;
}
}
}
for(ll i=m;i<=n;i++){
if(p[i]==1)
cout<<i<<endl;
}
return 0;
}
