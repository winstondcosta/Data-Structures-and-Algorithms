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
    void dfsHelper(T node, map<T,bool> &visited, int &country_size){
    visited[node] = true;
    country_size++;
    for(T neighbour: l[node]){
        if(!visited[neighbour]){
            dfsHelper(neighbour,visited,country_size);
        }
    }
    }

    int dfsMoon(){
     map<T,bool> visited;
     int size = l.size();
     int total = (size)*(size-1)/2;
     for(auto i:l){
     if(!visited[i.first]){
        int country_size = 0;
        dfsHelper(i.first,visited,country_size);
        //cout<<country_size<<endl;
        total -= (country_size)*(country_size-1)/2;
     }
     }
     return total;
     }
};

int main(){
Graph<int> g;
g.addEdge(0,1);
g.addEdge(2,3);
g.addEdge(0,4);
//g.printAdjList();
cout<<g.dfsMoon()<<endl;
return 0;
}




