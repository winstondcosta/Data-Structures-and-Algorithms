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



    bool detectionCycle(T src){
    queue<T> q;
    map<T,bool> visited;
    map<T,int> parent;

    q.push(src);
    visited[src] = true;
    parent[src] = src;

    while(!q.empty()){
    T value = q.front();
    q.pop();

    for(T neighbour: l[value]){
    if(visited[neighbour]==true && parent[value]!=neighbour){
        return true;
    }
    else if(!visited[neighbour]){
        q.push(neighbour);
        visited[neighbour] = true;
        parent[neighbour] = value;
    }
    }
    }
    }
};

int main(){
Graph<int> g;
g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(2,3);
g.addEdge(2,4);
g.addEdge(4,5);
g.addEdge(1,5);
g.addEdge(3,0);

if(g.detectionCycle(1)){
cout<<"There is a cycle"<<endl;
}
else{
cout<<"There is no cycle"<<endl;
}
return 0;
}



