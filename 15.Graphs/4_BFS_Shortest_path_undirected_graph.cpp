#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
map<T,list<T> > l;
public:
    Graph(){
    }

    void addEdge(T u,T v, bool bidirec=true){
    l[u].push_back(v);
    if(bidirec){
        l[v].push_back(u);
    }
    }

    void printAdjList(){
    for(auto i:l){
    cout<<i.first<<"-->";
    for(T vertex: i.second){
        cout<<vertex<<",";
    }
    cout<<endl;
    }
    }

    void bfs(T src){
    queue<T> q;
    map<T,int> dist;
    map<T,T> parent;
    for(auto i:l){
        dist[i.first] = INT_MAX;
    }
    q.push(src);
    dist[src] = 0;
    parent[src] = src;

    while(!q.empty()){
    T value = q.front();
    cout<<value<<",";
    q.pop();

    for(T neighbour: l[value]){
    if(dist[neighbour]==INT_MAX){
        q.push(neighbour);
        dist[neighbour] = dist[value] + 1;
        parent[neighbour] = value;
    }
    }
    }
    cout<<endl;
    for(auto i: l){
    cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<dist[i.first]<<endl;
    }
    }

};

int main(){
Graph<int> g;
g.addEdge(0,1);
g.addEdge(0,4);
g.addEdge(1,2);
g.addEdge(2,3);
g.addEdge(2,4);
g.addEdge(3,4);
g.addEdge(3,5);
g.bfs(0);
return 0;
}



