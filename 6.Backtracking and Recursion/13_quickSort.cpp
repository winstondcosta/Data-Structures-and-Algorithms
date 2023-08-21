#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//random quick sort
void shuffle(int a[],int s, int e){
int i,j;
srand(time(NULL));
for(i=e;i>0;i--){
    j = rand()%(i+1);
    swap(a[i],a[j]);
}
}

//quick sort
int partition(int a[],int s, int e){
int i = s-1;
int j;
int pivot = a[e];
for(j=s;j<e;j++){
if(a[j]<=pivot){
i++;
swap(a[j],a[i]);
}
}
swap(a[i+1],a[e]);
return i+1;
}

void quickSort(int a[],int s,int e){
if(s>=e){
return;
}
int p = partition(a,s,e);
quickSort(a,s,p-1);
quickSort(a,p+1,e);
}

int main(){
int a[] = {1,2,3,4,5};
int n = sizeof(a)/sizeof(int);
shuffle(a,0,n-1);
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<endl;
quickSort(a,0,n-1);
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}


