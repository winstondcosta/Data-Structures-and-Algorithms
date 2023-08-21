#include<iostream>
#include<cstring>
#define ll long long
using namespace std;
ll a[1000005],prefixsum[1000005];
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
ll sum = 0;
memset(prefixsum,0,n);
prefixsum[0]=1;
for(int i=0;i<n;i++){
cin>>a[i];
sum += a[i];
sum %= n;
sum = (sum+n)%n;
prefixsum[sum]++;
}
ll ans=0;
for(int i=0;i<n;i++){
cout<<prefixsum[i]<<" ";
ll no = prefixsum[i];
ans += (no)*(no-1)/2;
}
cout<<endl;
cout<<ans<<endl;
}
return 0;
}
