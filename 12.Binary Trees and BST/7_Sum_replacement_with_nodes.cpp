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

node *buildTree(){
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

void bfs(node *root){
queue<node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node *f = q.front();
    if(f==NULL){
    cout<<endl;
    q.pop();
    if(!q.empty()){
        q.push(NULL);
    }
    }
    else{
    cout<<f->data<<" ";
    q.pop();
    if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    }
    }
}
}

int replaceSum(node *root){
if(root==NULL){
    return 0;
}
if(root->left==NULL && root->right==NULL){
    return root->data;
}
int leftsum = replaceSum(root->left);
int rightsum = replaceSum(root->right);
int temp = root->data;
root->data = leftsum+rightsum;
return temp+root->data;
}

void print(node *root){
if(root==NULL){
    return;
}
cout<<root->data<<" ";
print(root->left);
print(root->right);
return;
}

int main(){
node *root = buildTree();
//print(root);
//cout<<endl;
bfs(root);
cout<<endl;
replaceSum(root);
bfs(root);
return 0;
}

