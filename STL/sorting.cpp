#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[] = {1,4,6,5,2,3};
sort(arr,arr+6);
for(int i=0;i<6;i++){
cout<<arr[i]<<endl;
}
cout<<endl;
sort(arr,arr+6,greater<int>());
for(int i=0;i<6;i++){
cout<<arr[i]<<endl;
}
return 0;
}
