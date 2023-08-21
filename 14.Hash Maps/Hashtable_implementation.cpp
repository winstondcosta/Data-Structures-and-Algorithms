#include<bits/stdc++.h>
using namespace std;
template<typename T>

class node{
public:
string key;
T value;
node<T> *next;

node(string k,T v){
    key = k;
    value = v;
}

~node(){
    if(next!=NULL){
        delete next;
    }
    }
};

template<typename T>

class HashTable{
int cs;
int ms;
node<T> **buckets;

void rehash(){
 node<T> **oldbuckets = buckets;
 int oldms = ms;
 ms = ms*2;
 cs = 0;
 buckets = new node<T>*[ms];
 for(int i=0;i<ms;i++){
    buckets[i] = NULL;
 }
 for(int i=0;i<oldms;i++){
    node<T> * temp = oldbuckets[i];
    if(temp!=NULL){
        while(temp!=NULL){
            insert(temp->key, temp->value);
            temp = temp->next;
        }
        delete oldbuckets[i];
    }
   }
    delete [] oldbuckets;
}

int hashfn(string key){
int ans = 0;
int p = 1; //37^0
int L = key.length();
for(int i=0;i<L;i++){
ans += key[L-i-1] * p;
p = p*37;
p %= ms;
ans %= ms;
}
return ans;
}

public:
    HashTable(int ds){
    cs = 0;
    ms = ds;
    buckets = new node<T>*[ms];
    for(int i=0;i<ms;i++){
        buckets[i] = NULL;
    }
    }
    //insert
    void insert(string key,T value){
    int i = hashfn(key);
    node<T> *n = new node<T>(key,value);
    n->next = buckets[i];
    buckets[i] = n;

    cs++;

    float load_factor = (float)cs/ms;
    if(load_factor>0.7){
        cout<<"Load Factor is"<<load_factor<<endl;
        rehash();
    }
    }

    void print(){
    for(int i=0;i<ms;i++){
        node<T> * temp = buckets[i];
        cout<<"Bucket: "<<i<<"->";
        while(temp!=NULL){
        cout<<temp->key<<","<<temp->value<<" || ";
        temp = temp->next;
        }
        cout<<endl;
    }
    }

    //Search
    T* search(string k){
        int i = hashfn(k);
        node<T>* temp = buckets[i];
        while(temp!=NULL){
            if(temp->key == k){
                return &(temp->value);
            }
            temp = temp->next;
        }
        return NULL;
    }

    void erase(string k){
        int i = hashfn(k);
        node<T>* temp = buckets[i];
        while(temp!=NULL){
            if(temp->key == k){
                break;
            }
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"No element found at key"<<k<<endl;
            return;
        }
        else{
            delete temp;
        }
    }
};

int main(){
HashTable<int> h(7);
h.insert("Mango",50);
h.insert("Banana",120);
h.insert("Orange",150);
h.insert("Guava",70);
h.insert("WaterMelon",40);

h.print();
h.erase("Mango");
cout<<endl;
h.print();
string k;
cin>>k;
int *price = h.search(k);
if(price==NULL){
    cout<<"Fruit not found"<<endl;
}
else{
    cout<<"Price is "<<*price<<endl;
}
return 0;
}
