#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph{
unordered_map<T,list<pair<T,int> > > m;
public:
    void addEdge(T u,T v,int dist,bool bidirec=true){
        m[u].push_back(make_pair(v,dist));
        if(bidirec){
            m[v].push_back(make_pair(v,dist));
        }
    }

    void print(){
        for(auto i:m){
            cout<<i.first<<"->";
            for(auto j:i.second){
            cout<<"("<<j.first<<","<<j.second<<"),";
            }
            cout<<endl;
        }
    }

    void Djikstras(T src){
    unordered_map<T,int> distance;
    set<pair<int,T> > s;
    for(auto i:m){
        distance[i.first] = INT_MAX;
    }
     distance[src] = 0;
     s.insert(make_pair(0,src));
     while(!s.empty()){
     auto p = *(s.begin());
     T node = p.second;
     int nodedist = p.first;
     s.erase(s.begin());
     for(auto neighbour:m[node]){
     if(nodedist+neighbour.second < distance[neighbour.first]){
     T dest = neighbour.first;
     auto f = s.find(make_pair(distance[dest],dest));
     if(f!=s.end()){
        s.erase(f);
     }
     distance[neighbour.first] = nodedist + neighbour.second;
     s.insert(make_pair(distance[neighbour.first],neighbour.first));
     }
     }
     }
     for(auto i:distance){
        cout<<i.first<<" is located at a distance of "<<i.second<<" from "<<src<<endl;
     }
    }

};

int main(){
Graph<int> g;
g.addEdge(1,2,1);
g.addEdge(1,3,4);
g.addEdge(1,4,7);
g.addEdge(2,3,1);
g.addEdge(3,4,2);
g.Djikstras(1);
return 0;
}
