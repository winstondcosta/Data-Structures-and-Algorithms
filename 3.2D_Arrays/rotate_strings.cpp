#include<iostream>
#include<cstring>
using namespace std;
void rotat(char *a, int k){
int i = strlen(a);
while(i>=0){
a[i+k] = a[i];
i--;
}
cout<<a<<endl;
cout<<sizeof(a)<<endl;
i = strlen(a);
cout<<i<<endl;
int j = i-k;
int s = 0;
while(j<i){
a[s] = a[j];
a[j] = '\0';
s++;
j++;
}
cout<<a<<endl;
cout<<sizeof(a)<<endl;
cout<<strlen(a)<<endl;
}

int main(){
char a[] = "Hello";
int k = 2;
rotat(a,k);
return 0;
}

rotate(arr,arr+k,arr+n); //rotate left
rotate(arr,arr+n-k,arr+n)//rotate right
