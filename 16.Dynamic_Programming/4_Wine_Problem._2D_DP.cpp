#include<bits/stdc++.h>
using namespace std;

int memo[100][100];

int maxProfit(int arr[], int s, int e, int year){
if(s>e){
    return 0;
}
if(memo[s][e]!=-1){
    return memo[s][e];
}
int q1 = arr[s]*year + maxProfit(arr,s+1,e,year+1);
int q2 = arr[e]*year + maxProfit(arr,s,e-1,year+1);
memo[s][e] = max(q1,q2);
return memo[s][e];
}

int maxProfitDP(int arr[], int n){
int dp[100][100] = {};
int year=n;
for(int i=0;i<n;i++){
    dp[i][i] = arr[i]*year;
}
year--;
for(int len=2;len<=n;len++){
int start = 0;
int end = n-len;
while(start<=end){
int endwindow = start + len - 1;
dp[start][endwindow] = max(
    arr[start]*year+ dp[start+1][endwindow],
    arr[endwindow]*year + dp[start][endwindow-1]
    );
start++;
}
year--;
}
return dp[0][n-1];
}

int main(){
int arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];
}
memset(memo,-1,sizeof(memo));
//cout<<maxProfit(arr,0,n-1,1)<<endl;
cout<<maxProfitDP(arr,n)<<endl;
return 0;
}
