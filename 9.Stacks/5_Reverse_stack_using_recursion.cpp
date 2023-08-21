#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<char>& s, int x){
if(s.empty()){
s.push(x);
return;
}
int y = s.top();
s.pop();
insertAtBottom(s,x);
s.push(y);
}

void stackReverseRec(stack<char>& s){
if(s.empty()){
return;
}
int x = s.top();
s.pop();
stackReverseRec(s);
insertAtBottom(s,x);
}
int main(){
stack<char> s;
for(int i='a';i<='d';i++){
s.push(i);
}
stackReverseRec(s);
while(!s.empty()){
cout<<s.top()<<endl;
s.pop();
}
return 0;
}

