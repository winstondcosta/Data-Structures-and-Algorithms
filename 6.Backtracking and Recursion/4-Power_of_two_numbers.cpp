#include<iostream>
using namespace std;
int pow(int a,int b){
if(b==0){
return 1;
}
return a*pow(a,b-1);
}

int fastpow(int a,int b){
if(b==0){
return 1;
}
int ans = fastpow(a,b/2);
ans *= ans;
if(b%2==1){
return a*ans;
}
return ans;
}
int main(){
int a,b;
cin>>a>>b;
cout<<pow(a,b)<<endl;
cout<<fastpow(5,5)<<endl;
return 0;
}
