#include<iostream>
using namespace std;
void staircaseSearch(int a[3][20], int m, int n, int key){
int i=0, j=(n-1);
while(i<m && j>0){
if(a[i][j]==key){
cout<<"Element found at position "<<i<<" and "<<j<<endl;
return;
}
else if(key<a[i][j]){
j--;
}
else{
i++;
}
}
}
int main(){
int a[3][20];
int m, n, key;
cin>>m>>n;
cout<<"Enter number to be searched: "<<endl;
cin>>key;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
staircaseSearch(a,m,n,key);
return 0;
}
