#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Queue{
T *arr;
int f,r,ms,cs;
public:
    Queue(int ds){
    f = 0;
    ms = ds;
    r = ms-1;
    cs = 0;
    arr = new T[ms];
    }

    bool isFull(){
        return cs==ms;
    }
    void enqueue(T data){
    if(!isFull()){
        r = (r+1)%ms;
        arr[r] = data;
        cs++;
    }
    }

    bool isEmpty(){
        return cs==0;
    }

    void dequeue(){
    if(!isEmpty()){
        f = (f+1)%ms;
        cs--;
    }
    }

    T getFront(){
        return arr[f];
    }
};

int main(){
Queue<int> q(6);
for(int i=1;i<=6;i++){
    q.enqueue(i);
}
q.dequeue();
q.enqueue(7);
while(!q.isEmpty()){
cout<<q.getFront()<<endl;
q.dequeue();
}
return 0;
}
