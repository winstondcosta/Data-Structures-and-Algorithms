#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src,char dst,char helper){
if(n==0){
return;
}
towerOfHanoi(n-1,src,helper,dst);
cout<<"Move "<<n<<" from "<<src<<" to "<<dst<<endl;
towerOfHanoi(n-1,helper,dst,src);
}

int main(){
int n;
cin>>n;
towerOfHanoi(n,'A','C','B');
return 0;
}
