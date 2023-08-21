#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<string,int> m;
//insert
m["Mango"] = 120;
m["Mango"] = 140;
m["Banana"] = 60;
m["Orange"] = 80;
m["Watermelon"] = 50;
m.insert(make_pair("Guava",90));
//display
for(auto node:m){
cout<<node.first<<","<<node.second<<endl;
}
cout<<m.count("Mango")<<endl;
//search
if(m.count("Mango")==1){
cout<<"Mango costs "<<m["Mango"]<<endl;
}
else{
cout<<"Mango not present"<<endl;
}
//delete
m.erase("Orange");
for(int i=0;i<m.bucket_count();i++){
    cout<<"Bucket "<<i<<"->";
    for(auto it=m.begin(i);it!=m.end(i);it++){
        cout<<it->first<<","<<it->second;
    }
    cout<<endl;
}
auto f = m.find("Orange");
if(f!=m.end()){
cout<<"Orange costs "<<(f->second)<<endl;
}
else{
cout<<"Orange not present"<<endl;
}
return 0;
}
