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

void print(node *root){
if(root==NULL){
    return;
}
cout<<root->data<<" ";
print(root->left);
print(root->right);
}

int sum(node *root)
{
    if (root == NULL)
        return 0;

    return sum(root->left) + root->data +
           sum(root->right);
}

int isSumTree(node* root)
{
    int ls, rs;
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 1;

    ls = sum(root->left);
    rs = sum(root->right);
    if ((root->data == ls + rs) && isSumTree(root->left) && isSumTree(root->right))
        return 1;
    return 0;
}

int main(){
node *root = buildTree();
print(root);
cout<<endl;
if (isSumTree(root))
        cout << "The given tree is a SumTree ";
    else
        cout << "The given tree is not a SumTree ";
return 0;
}

