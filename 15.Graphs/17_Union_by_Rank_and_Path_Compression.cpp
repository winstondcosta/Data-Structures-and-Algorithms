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

    int find(vector<pair<int,int> > &parent, T i){
    if(parent[i].first == -1){
        parent[i].first = find(parent,parent[i].first);
    }
    return parent[i].first;
    }

    void Union(vector<pair<int,int> > &parent,T x,T y){
        if(parent[x].second < parent[y].second){
            parent[x].first = y;
        }
        else if(parent[x].second > parent[y].second){
            parent[y].first = x;
        }
        else{
            parent[y].first = x;
            parent[x].second++;
        }
    }

    int isCycle(){
    vector<pair<int, int> > parent;
    for(auto i: l){
    parent.push_back(make_pair(-1,0));
    }
    for(auto i:l){
        T u = i.first;
        for(T v:l[u]){
            T x = find(parent,u);
            T y = find(parent,v);
        if(x==y)
            return 1;
        Union(parent, x, y);
        }
    }
    return 0;
    }
};

int main(){
Graph<int> g;
g.addEdge(0,1,false);
g.addEdge(0,2,false);
g.addEdge(1,2,false);
//g.printAdjList();
if(g.isCycle()){
cout<<"Graph contains cycle"<<endl;
}
else{
cout<<"Graph doesn't contain cycle"<<endl;
}
return 0;
}


