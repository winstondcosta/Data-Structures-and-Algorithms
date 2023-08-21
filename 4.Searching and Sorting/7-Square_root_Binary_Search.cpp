#include<iostream>
using namespace std;

float squareRoot(int n, int p){
int s=0,e=n,mid;
float ans;
while(s<=e){
mid = (s+e)/2;
if(mid*mid==n){
   ans = mid;
   break;
}
else if(mid*mid<n){
ans = mid;
s=mid+1;
}
else{
e = mid - 1;
}
}

float inc = 0.1;
for(int i=0;i<p;i++){
while(ans*ans<=n){
 ans+=inc;
 }
ans = ans - inc;
inc = inc/10;
}
return ans;
}

int main(){
int n,p;
float res;
cin>>n;
cin>>p;
//res = binarySearch(a,n,key);
//res = firstOccurence(a,n,key);
res = squareRoot(n,p);
if(res!=-1){
cout<<"Square root of "<<n<<" is "<<res<<endl;
}
else{
cout<<"Error"<<endl;
}
return 0;
}
