#include<iostream>
using namespace std;
int main(){
char a[2][4] = {{'a','b','c'},{'d','e','f','g'}};
cout<<a[0]<<endl;
cout<<a[1]<<endl;
char s[3][100];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>s[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<s[i][j];
    }
    cout<<endl;
}
//Input Strings
char stringlist[10][100];
cout<<sizeof(stringlist)<<endl;
for(int i=0;i<3;i++){
cin.getline(stringlist[i], 100);
}
cout<<endl;
for(int i=0;i<3;i++){
    cout<<stringlist[i]<<endl;
}
return 0;
}
