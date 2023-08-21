#include<iostream>
#include<cstring>
using namespace std;
bool ispermutation(char *s1,char *s2){
int freq[26] = {0};
int l1 = strlen(s1);
int l2 = strlen(s2);
if(l1!=l2){
return false;
}
else{
for(int i=0;i<l1;i++){
freq[s1[i]-'a']++;
}
for(int i=0;i<l2;i++){
freq[s2[i]-'a']--;
}
}
for(int i=0;i<26;i++){
if(freq[i]!=0){
return false;
}
else{
return true;
}
}
}
int main(){
char s1[100], s2[100];
cin>>s1>>s2;
if(ispermutation(s1,s2)){
cout<<"Both Strings are permutations of each other"<<endl;
}
else{
cout<<"Both Strings are not permutations of each other"<<endl;
}
}
