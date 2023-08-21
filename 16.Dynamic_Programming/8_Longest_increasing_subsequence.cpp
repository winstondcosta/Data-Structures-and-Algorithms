#include<bits/stdc++.h>
using namespace std;

int LIS(int arr[],int n){
int dp[100] = {};
for(int i=0;i<n;i++){
dp[i] = 1;
}
int best =-1;
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[j]<=arr[i]){
            int curlen = dp[j] + 1;
            dp[i] = max(curlen,dp[i]);
        }
    }
    best = max(best,dp[i]);
}
return best;
}

int main(){
int arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<LIS(arr,n);
return 0;
}
