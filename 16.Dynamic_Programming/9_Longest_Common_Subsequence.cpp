#include<bits/stdc++.h>
using namespace std;

int LCS(char x[],char y[]){
int dp[100][100] = {};
int m =strlen(x);
int n = strlen(y);
for(int i=0;i<=n;i++){
dp[0][i] = 0;
}
for(int j=0;j<=m;j++){
dp[j][0] = 0;
}
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        int q = 0;
        if(x[i]==y[j]){
             q = dp[i-1][j-1] + 1;
        }
        else{
             q = max(dp[i-1][j],dp[i][j-1]);
        }
    dp[i][j] = q;
    }
}
return dp[m][n];
}

int main(){
char x[100],y[100];
cin>>x>>y;
cout<<LCS(x,y);
return 0;
}

