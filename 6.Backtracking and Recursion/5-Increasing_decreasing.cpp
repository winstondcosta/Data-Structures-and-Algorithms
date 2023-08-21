#include<iostream>
using namespace std;
void dec(int n){
if(n==0){
return;
}
cout<<n<<" ";
dec(n-1);
}

void inc(int n){
if(n==0){
return;
}
inc(n-1);
cout<<n<<" ";
}

int main(){
int n;
cin>>n;
cout<<"Increasing: "<<endl;
inc(n);
cout<<endl;
cout<<"Decreasing: "<<endl;
dec(n);
return 0;
}

