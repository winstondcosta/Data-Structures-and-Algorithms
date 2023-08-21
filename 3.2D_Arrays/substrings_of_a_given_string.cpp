#include<iostream>
#include<cstring>
using namespace std;
int main(){
char s[100];
cin>>s;
for(int i=0;s[i]!='\0';i++){
    for(int j=i;s[j]!='\0';j++){
        for(int k=i;k<=j;k++){
            cout<<s[k];

        }
    cout<<endl;
    }
}
return 0;
}
