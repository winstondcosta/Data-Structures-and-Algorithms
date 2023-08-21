#include<iostream>
using namespace std;
int main(){
int a[10][10];
int m, n, temp=0;
cin>>m>>n;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i!=j){
        temp = a[i][j];
        a[j][i] = a[i][j];
        a[i][j] = temp;
        }
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
