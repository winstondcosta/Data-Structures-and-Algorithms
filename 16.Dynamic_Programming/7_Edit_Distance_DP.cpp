#include<bits/stdc++.h>
using namespace std;

int editDistance(char inp[],char out[]){
int dp[101][101] = {};
int m = strlen(inp);
int n = strlen(out);
dp[0][0] = 0;
for(int c=1;c<=n;c++){
    dp[0][c] = dp[0][c-1] + 1;
}
for(int r=1;r<=m;r++){
    dp[r][0] = dp[r-1][0] + 1;
}
for(int r=1;r<=m;r++){
    for(int c=1;c<=n;c++){
        int q1 = dp[r-1][c-1];
        int q2 = dp[r-1][c];
        int q3 = dp[r][c-1];
    dp[r][c] = min(q1,min(q2,q3)) + (inp[r-1]!=out[c-1]);
    }
}
return dp[m][n];
}

int main(){
char inp[100];
char out[100];
cin>>inp>>out;
cout<<editDistance(inp,out)<<endl;
return 0;
}
