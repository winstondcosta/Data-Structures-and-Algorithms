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

    int bfs(T src, T dest){
    queue<T> q;
    map<T,int> dist;
    map<T,T> parent;
    for(auto i:l){
        dist[i.first] = INT_MAX;
    }
    q.push(src);
    dist[src] = 0;
    parent[src] = src;

    while(!q.empty()){
    T value = q.front();
    //cout<<value<<",";
    q.pop();

    for(T neighbour: l[value]){
    if(dist[neighbour]==INT_MAX){
        q.push(neighbour);
        dist[neighbour] = dist[value] + 1;
        parent[neighbour] = value;
    }
    }
    }

    T temp = dest;
    while(temp!=src){
        cout<<temp<<"<--";
        temp = parent[temp];
    }
    cout<<src<<endl;

    return dist[dest];
    }
};

int main(){
Graph<int> g;
int board[50] = {0};
board[2] = 13;
board[5] = 2;
board[9] = 18;
board[18] = 11;
board[17] = -13;
board[20] = -14;
board[24] = -8;
board[25] = -10;
board[32] = -2;
board[34] = -22;

for(int u=0;u<=36;u++){
    for(int dice=1;dice<=6;dice++){
        int v = u + dice + board[u+dice];
        g.addEdge(u,v,false);
     }
}
cout<<"The shortest dist is: "<<g.bfs(1,36)<<endl;;

return 0;
}




