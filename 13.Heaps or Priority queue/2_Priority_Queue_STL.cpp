#include<bits/stdc++.h>
using namespace std;
int main(){
//priority_queue<int> pq; //max_heap
priority_queue<int,vector<int>,greater<int> > pq; //minheap
int a[] = {3,6,4,8,2,9};
int n = sizeof(a)/sizeof(int);
for(int i=0;i<n;i++){
    pq.push(a[i]);
}
while(!pq.empty()){
cout<<pq.top()<<" ";
pq.pop();
}
return 0;
}
