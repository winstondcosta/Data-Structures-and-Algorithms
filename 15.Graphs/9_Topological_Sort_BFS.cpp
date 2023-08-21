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

    void bfsTopologicalSort(){
    queue<T> q;
    map<T,bool> visited;
    map<T,int> indegree;

    for(auto i:l){
        T node = i.first;
        visited[node] = false;
        indegree[node] = 0;
    }

    for(auto i:l){
        T u = i.first;
        for(T v:l[u]){
            indegree[v]++;
        }
    }

    for(auto i:l){
        T node = i.first;
        if(indegree[node]==0){
            q.push(node);
        }
    }

    while(!q.empty()){
    T value = q.front();
    q.pop();
    cout<<value<<"-->";
    for(T neighbour: l[value]){
        indegree[neighbour]--;
        if(indegree[neighbour]==0){
            q.push(neighbour);
        }
    }
    }
    }
};

int main(){
Graph<string> g;
g.addEdge("English","Programming Logic",false);
g.addEdge("English","HTML",false);
g.addEdge("Maths","Programming Logic",false);
g.addEdge("Programming Logic","HTML",false);
g.addEdge("Programming Logic","Python",false);
g.addEdge("Programming Logic","Java",false);
g.addEdge("Programming Logic","JS",false);
g.addEdge("HTML","CSS",false);
g.addEdge("CSS","JS",false);
g.addEdge("Java","Web Dev",false);
g.addEdge("JS","Web Dev",false);
g.addEdge("Python","Web Dev",false);
g.bfsTopologicalSort();
return 0;
}



