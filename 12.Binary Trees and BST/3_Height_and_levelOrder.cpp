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

int height(node *root){
if(root==NULL)
    return 0;
int ls = height(root->left);
int rs = height(root->right);
return max(ls,rs)+1;
}

void printkthLevel(node *root, int k){
if(root==NULL){
    return;
}
if(k==1){
cout<<root->data<<" ";
return;
}
printkthLevel(root->left,k-1);
printkthLevel(root->right,k-1);
return;
}

void printAllLevels(node *root){
int h = height(root);
for(int i=1;i<=h;i++){
printkthLevel(root,i);
cout<<endl;
}
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
cout<<"Height of the tree: "<<height(root)<<endl;
printkthLevel(root,3);
cout<<endl;
printAllLevels(root);
return 0;
}

