#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int fib(ll n){
int dp[1000000] = {};
dp[0] = 0;
dp[1] = 1;
for(ll i=2;i<=n;i++){
    dp[i] = dp[i-1] + dp[i-2];
}
return dp[n];
}

int main(){
ll n;
cin>>n;
cout<<fib(n)<<endl;
return 0;
}

