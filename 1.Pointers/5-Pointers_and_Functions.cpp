#include<iostream>
using namespace std;
void print(int *p){
cout<<*p<<endl;
}
void incrementPointer(int *p){
p = p + 1;
}
void increment(int* p){
(*p)++;
}
int sum(int *arr, int size){
cout<<sizeof(arr)<<endl;
int res=0;
for(int i=0;i<size;i++){
res += *(arr+i);
//res += arr[i];
}
}
int main(){
int i = 10;
int *p = &i;
print(p);
cout<<p<<endl;
incrementPointer(p);
cout<<p<<endl;

cout<<*p<<endl;
increment(p);
cout<<*p<<endl;

int arr[10];
cout<<sizeof(arr)<<endl;
cout<<sum(arr+3,7)<<endl;
return 0;
}

