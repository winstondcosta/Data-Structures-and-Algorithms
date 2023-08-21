#include<bits/stdc++.h>
#include<stack>
#include<cstring>
using namespace std;
int main(){
stack<string> s;
s.push("Winston");
s.push("Vineet");
s.push("Vivek");
while(!s.empty()){
cout<<s.top()<<endl;
s.pop();
}
return 0;
}
