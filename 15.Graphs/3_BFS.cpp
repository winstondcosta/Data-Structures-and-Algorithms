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
    map<T,bool> visited;
    q.push(src);
    visited[src] = true;
    while(!q.empty()){
    T value = q.front();
    cout<<value<<",";
    q.pop();

    for(T neighbour: l[value]){
    if(!visited[neighbour]){
        q.push(neighbour);
        visited[neighbour] = true;
    }
    }
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


