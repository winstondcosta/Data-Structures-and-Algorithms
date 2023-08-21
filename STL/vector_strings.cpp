#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string s = "Winston";
string s1(s);
string s2(s1,2,4);
string s3 = s.substr(1,4);
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s3<<endl;
if(s1.compare(s2)==0){
cout<<s2<<" is equal to "<<s3<<endl;
}
else{
cout<<s2<<" is not equal to  "<<s3<<endl;
}
return 0;
}
