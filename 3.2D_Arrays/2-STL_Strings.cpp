#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string a, string b){
if(a.length()>b.length()){
return true;
}
else if(a.length() == b.length()){
return a<b;
}
else{
return false;
}
}
int main(){
string s1("hello World");
string s2 = "Good Morning";
for(int i=0;i<s2.length();i++){
cout<<s2[i]<<",";
}
cout<<endl;
//getline(cin,s2);
cout<<endl;
cout<<s1<<endl;
//cout<<s2<<endl;
string s3[] = {"apple", "basketball","camel","dice","egg"};
sort(s3, s3+5,compare);
for(int i=0;i<5;i++){
cout<<s3[i]<<endl;
}
return 0;
}
