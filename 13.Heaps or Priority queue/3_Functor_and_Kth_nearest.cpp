#include<bits/stdc++.h>
using namespace std;

class Car{
public:
    int x;
    int y;
    int id;

    Car(int id,int x,int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }

    int dist(){
        return x*x + y*y;
    }

    void print(){
        cout<<"ID: "<<id;
        cout<<" Location: "<<x<<","<<y;
        cout<<endl;
    }
};

class CarCompare{
public:
    bool operator()(Car a,Car b){
        return a.dist()>b.dist();
    }
};

int main(){
priority_queue<Car,vector<Car>,CarCompare> pq;
int k,count=0;
cin>>k;
int x[] = {5,6,17,18,9,11,0,3};
int y[] = {1,-2,8,9,10,91,1,2};
int n = sizeof(x)/sizeof(int);
for(int i=0;i<n;i++){
    Car c(i,x[i],y[i]);
    pq.push(c);
}

while(!pq.empty() && count<k){
Car p = pq.top();
p.print();
pq.pop();
count++;
}
return 0;
}
