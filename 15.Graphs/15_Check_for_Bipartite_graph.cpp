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

    bool isBipartite(T src){
    queue<T> q;
    map<T,int> colors;
    q.push(src);
    for(auto i:l){
        colors[i.first] = -1;
    }
    colors[src] = 0;
    while(!q.empty()){
    T value = q.front();
    q.pop();
    for(T  neighbour: l[value]){
    if(colors[neighbour] == -1){
        q.push(neighbour);
        colors[neighbour] = 1 - colors[value];
    }
    else if(colors[neighbour] == colors[value]){
        return false;
    }
    }
    }
    return true;
    }
};

int main(){
Graph<int> g;
g.addEdge(1,2);
g.addEdge(1,3);
g.addEdge(3,4);
g.addEdge(2,4);
g.addEdge(1,4);
if(g.isBipartite(1)){
cout<<"Yes it is"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}


