#include<bits/stdc++.h>
using namespace std;

void transfer(stack<char>& s1,stack<char>& s2,int n){
for(int i=0;i<n;++i){
s2.push(s1.top());
s1.pop();
}
}

void reverseStack(stack<char>& s1){
stack<char> s2;
int  n = s1.size();
for(int i=0;i<n;++i){
char x = s1.top();
s1.pop();
transfer(s1,s2,n-i-1);
s1.push(x);
transfer(s2,s1,n-i-1);
}
}

int main(){
stack<char> s;
for(int i='a';i<='d';i++){
s.push(i);
}
reverseStack(s);
while(!s.empty()){
cout<<s.top()<<endl;
s.pop();
}
return 0;
}

