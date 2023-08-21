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

    bool isCyclicHelper(T node, map<T,bool> &visited, map<T,bool> &instack){
     visited[node] = true;
     instack[node] = true;
     for(T neighbour:l[node]){
        if(!visited[neighbour] && isCyclicHelper(neighbour,visited,instack) || instack[neighbour]==true){
            return true;
        }
     }
     instack[node] = false;
     return false;
     }

    bool isCyclic(){
        map<T,bool> visited;
        map<T,bool> instack;
        for(auto i:l){
            T node = i.first;
            if(!visited[node]){
                bool cyclepresent = isCyclicHelper(node,visited,instack);
                if(cyclepresent){
                    return true;
                }
            }
        }
        return false;

    }
};

int main(){
Graph<int> g;
g.addEdge(0,1,false);
g.addEdge(0,2,false);
g.addEdge(2,3,false);
g.addEdge(2,4,false);
g.addEdge(4,5,false);
g.addEdge(1,5,false);
//g.addEdge(3,0,false);
if(g.isCyclic()){
cout<<"There is cycle"<<endl;
}
else{
cout<<"There is no cycle"<<endl;
}
return 0;
}



