#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
string s="gdhIgHada";
map<char,int> m;
int count = 0;
for(int i=0;i<s.length();i++){
char cur = s[i];
m[cur]++;
}
for(int i=0;i<s.length();i++){
if(m[s[i]]==1){
cout<<s[i];
count = 1;
break;
}
}
if(count==0){
cout<<s[0];
}
return 0;
}

