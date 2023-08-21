 #include<bits/stdc++.h>
using namespace std;

void query_print(priority_queue<int,vector<int>,greater<int> > pq){
    while(!pq.empty()){
    cout<<pq.top()<<",";
    pq.pop();
    }
}

int main(){
//priority_queue<int> pq; //max_heap
priority_queue<int,vector<int>,greater<int> > pq;
int no;
int cs=0;
int k=3;
while(scanf("%d",&no)!=EOF){
if(no==-1){
    query_print(pq);
    cout<<endl;
}
else if(cs<k){
    pq.push(no);
    cs++;
}
else{
    if(no>pq.top()){
        pq.pop();
        pq.push(no);
    }
}
}
return 0;
}
