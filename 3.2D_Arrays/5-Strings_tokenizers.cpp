#include<iostream>
#include<cstring>
using namespace std;
int main(){
char s[] = "Hi, I am teaching about strings, in C++";
char *ptr;
ptr = strtok(s," ");
while(ptr!=NULL){
cout<<ptr<<endl;
ptr = strtok(NULL," ");
}
return 0;
}
