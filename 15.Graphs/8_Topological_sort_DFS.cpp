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

    void dfsHelper(T node, map<T,bool> &visited, list<T> &ordering){
    visited[node] = true;
    for(T neighbour: l[node]){
        if(!visited[neighbour]){
            dfsHelper(neighbour,visited,ordering);
        }
    }
    ordering.push_front(node);
    }

    void dfsTopologicalSort(){
     map<T,bool> visited;
     list<T> ordering;
     for(auto i:l){
     T node = i.first;
     if(!visited[node]){
        dfsHelper(node,visited,ordering);
     }
     }
     for(T vertex:ordering){
     cout<<vertex<<"-->";
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
g.printAdjList();
cout<<endl;
g.dfsTopologicalSort();
return 0;
}



