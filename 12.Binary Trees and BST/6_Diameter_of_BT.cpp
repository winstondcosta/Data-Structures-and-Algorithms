#include<bits/stdc++.h>
#define P pair<int,int>
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

int diameter(node *root){
if(root==NULL){
    return 0;
}
int h1 = height(root->left);
int h2 = height(root->right);
int op1 = h1+h2;
int op2 = diameter(root->left);
int op3 = diameter(root->right);
return max(op1,max(op2,op3));
}

P fastDiameter(node *root){
P p;
if(root==NULL){
p.first = 0;
p.second = 0;
return p;
}
P left = fastDiameter(root->left);
P right = fastDiameter(root->right);
p.first = max(left.first,right.first)+1;
p.second = max(left.first+right.first,max(left.second,right.second));
return p;
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
P p = fastDiameter(root);
cout<<"Height of tree: "<<p.first<<endl;
cout<<"Diameter of tree: "<<p.second<<endl;
return 0;
}


