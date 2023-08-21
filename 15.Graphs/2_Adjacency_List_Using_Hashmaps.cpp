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
};

int main(){
Graph<string> g;
g.addEdge("Putin","Trump",false);
g.addEdge("Putin","Modi",false);
g.addEdge("Putin","Pope",false);
g.addEdge("Trump","Modi");
g.addEdge("Prabhu","Modi",false);
g.addEdge("Modi","Yogi");
g.addEdge("Yogi","Prabhu",false);
g.printAdjList();
return 0;
}

