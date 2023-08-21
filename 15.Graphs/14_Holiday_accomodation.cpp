#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
map<T,list<pair<T,int> > > l;
public:
    Graph(){
    }

    void addEdge(T u,T v, int cost, bool bidirec=true){
    l[u].push_back(make_pair(v,cost));
    if(bidirec){
        l[v].push_back(make_pair(u,cost));
    }
    }

    int dfsHelper(T node, map<T,bool> &visited, map<T,int> &count, int &ans){
    visited[node] = true;
    count[node] = 1;

    for(auto neighbour: l[node]){
        int v = neighbour.first;
        if(!visited[v]){
            count[node] = count[node] + dfsHelper(v,visited,count,ans);
            int edgecost = neighbour.second;
            int s = count[v];
            int N = l.size();
            ans += 2*min(s,N-s)*edgecost;
        }
    }
    return count[node];
    }

    int dfs(T src){
     map<T,bool> visited;
     //int *count = new int[l.size()];
     map<T,int> count;
     int ans=0;
     dfsHelper(0,visited,count,ans);
     return ans;
     }
};

int main(){
Graph<int> g;
g.addEdge(0,1,3);
g.addEdge(1,2,2);
g.addEdge(2,3,2);
cout<<g.dfs(0)<<endl;
return 0;
}




