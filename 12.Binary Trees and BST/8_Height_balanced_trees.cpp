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

class Pair{
public:
    int height;
    bool balance;
};

Pair isBalanced(node *root){
Pair p;
if(root==NULL){
    p.height=0;
    p.balance = true;
    return p;
}
Pair left = isBalanced(root->left);
Pair right = isBalanced(root->right);
p.height = max(left.height,right.height)+1;
if(abs(left.height-right.height)<=1 && left.balance && right.balance){
    p.balance = true;
}
else{
    p.balance = false;
}
return p;
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
print(root);
cout<<endl;
if(isBalanced(root).balance){
    cout<<"It is height balanced tree"<<endl;
}
else{
    cout<<"It is not a height balanced tree"<<endl;
}
return 0;
}

