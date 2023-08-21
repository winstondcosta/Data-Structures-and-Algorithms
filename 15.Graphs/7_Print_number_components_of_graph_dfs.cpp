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
    void dfsHelper(T node, map<T,bool> &visited){
    visited[node] = true;
    cout<<node<<",";
    for(T neighbour: l[node]){
        if(!visited[neighbour]){
            dfsHelper(neighbour,visited);
        }
    }
    }

    void dfs(T src){
     map<T,bool> visited;
     int component =1;
     dfsHelper(src,visited);
     cout<<endl;
     for(auto i:l){
     if(!visited[i.first]){
        dfsHelper(i.first,visited);
        component++;
     }
     }
     cout<<endl;
     cout<<"The graph has "<<component<<" component"<<endl;
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
g.addEdge(6,7);
g.dfs(0);
return 0;
}



