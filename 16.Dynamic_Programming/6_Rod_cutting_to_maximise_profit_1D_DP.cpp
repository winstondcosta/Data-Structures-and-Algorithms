#include<bits/stdc++.h>
using namespace std;
int memo[1000];

int maxProfit(int arr[], int totallen){
if(totallen==0){
return 0;
}
if(memo[totallen]!=-1){
return memo[totallen];
}
int best=0;
for(int len=1;len<=totallen;len++){
int profit = arr[len] + maxProfit(arr,totallen-len);
best = max(best,profit);
}
memo[totallen] = best;
return memo[totallen];
}

int maxProfitDP(int arr[],int totallen){
int dp[100] ={};
for(int len=1;len<=totallen;len++){
int best = 0;
for(int cut=1;cut<=len;cut++){
    best = max(best ,arr[cut] + dp[len-cut]);
}
dp[len] = best;
}
return dp[totallen];
}

int main(){
int arr[100];
int n;
cin>>n;
memset(memo,-1,sizeof(memo));
for(int i=1;i<=n;i++){
cin>>arr[i];
}
//cout<<maxProfit(arr,n);
cout<<maxProfitDP(arr,n);
return 0;
}
