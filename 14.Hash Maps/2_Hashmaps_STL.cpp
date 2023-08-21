#include<bits/stdc++.h>
using namespace std;

class Fruit{
public:
    string name;
    int price;
    string place;
    Fruit(){
    }
    Fruit(string n,int price1,string p){
    name = n;
    price = price1 ;
    place = p;
    }
};

int main(){
unordered_map<string,Fruit> m;
Fruit f("Mango",100,"Mumbai");
m[f.name] = f;
Fruit fs = m["Mango"];
cout<<fs.place<<","<<fs.price<<endl;
return 0;
}
