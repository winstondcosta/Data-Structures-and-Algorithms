#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
//int n;
//cin>>n;
int arr[5] = {10,30,20,10,30};
set<int> s;
for(int i=0;i<5;i++){
//cin>>arr[i];
s.insert(arr[i]);
}
set<int>::iterator it;
for(it=s.begin();it!=s.end();it++){
cout<<*it<<" ";
}
return 0;
}

