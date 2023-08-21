#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *left;
    node *right;
    node(int d){
    data = d;
    left = NULL;
    right = NULL;
    }
};

node* buildTree(){
int d;
cin>>d;
if(d==-1){
    return NULL;
    }
node *root = new node(d);
root->left = buildTree();
root->right = buildTree();
return root;
}

void vop(node *root,map<int,vector<int> > &m, int d=0){
if(root==NULL){
return;
}
m[d].push_back(root->data);
vop(root->left,m,d-1);
vop(root->right,m,d+1);
}

void lop(node *root,map<int,vector<int> > &m2, int d=0){
if(root==NULL){
return;
}
m2[d].push_back(root->data);
lop(root->left,m2,d+1);
lop(root->right,m2,d+1);
}

void print(node *root){
if(root==NULL){
    return;
}
cout<<root->data<<" ";
print(root->left);
print(root->right);
}

int main(){
node *root = buildTree();
print(root);
cout<<endl;
cout<<"Vertical Order: "<<endl;
map<int,vector<int> > m;
vop(root,m);
for(auto it=m.begin();it!=m.end();it++){
cout<<it->first<<"->";
for(int j=0;j<it->second.size();j++){
cout<<it->second[j]<<",";
}
cout<<endl;
}

cout<<"Level Order: "<<endl;
map<int,vector<int> > m2;
lop(root,m2);
for(auto it=m2.begin();it!=m2.end();it++){
cout<<it->first<<"->";
for(int j=0;j<it->second.size();j++){
cout<<it->second[j]<<",";
}
cout<<endl;
}

return 0;
}

