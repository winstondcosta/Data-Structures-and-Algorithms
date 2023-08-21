#include<bits/stdc++.h>
#define inf INT_MAX
using namespace std;

int memo[1000];

int reduceNo(int no){
if(no==1){
    return 0;
}
int q1=inf,q2=inf,q3=inf;

if(memo[no]!=-1){
    return memo[no];
}
if(no%3==0)
    q1 = 1+reduceNo(no/3);
if(no%2==0)
    q2 = 1+reduceNo(no/2);
q3 = 1+reduceNo(no-1);
memo[no] = min(q1,min(q2,q3));
return memo[no];
}

int reduceDP(int no){
int dp[1000];
dp[0]=0;dp[1]=1;dp[2]=1;dp[3]=1;
for(int i=4;i<=no;i++){
    int q1=inf,q2=inf,q3=inf;
    if(i%3==0){
        q1 = 1+dp[i/3];
    }
    if(i%2==0){
        q2 = 1+dp[i/2];
    }
    q3 = 1+dp[i-1];
    dp[i] = min(q1,min(q2,q3));
}
return dp[no];
}

int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
    memo[i] = -1;
}
//cout<<reduceNo(n)<<endl;
cout<<reduceDP(n)<<endl;
return 0;
}
