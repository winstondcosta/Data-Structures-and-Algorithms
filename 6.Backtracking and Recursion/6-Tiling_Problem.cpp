#include<iostream>
using namespace std;
int tiles(int n){
if(n==0){
return 0;
}
if(n<4){
return 1;
}
if(n==4){
return 2;
}
return tiles(n-1) + tiles(n-4);
}

int main(){
int n;
cin>>n;
cout<<tiles(n)<<endl;
return 0;
}
