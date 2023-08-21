#include<bits/stdc++.h>
using namespace std;
bool checkParanthesis(string str){
stack<char> s;
for(int i=0;i<str.size();i++){
if(str[i]=='('){
s.push(str[i]);
}
else if(str[i]==')'){
if(s.empty() || s.top()!='('){
return false;
}
s.pop();
}
}
return s.empty();
}

int main(){
string str;
cin>>str;
if(checkParanthesis(str)){
cout<<"Valid expression"<<endl;
}
else{
cout<<"Invalid expression"<<endl;
}
return 0;
}
