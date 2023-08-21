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

int findLCA(node* root, int n1, int n2)
{
    if (root == NULL) return NULL;
    if (root->data == n1 || root->data == n2)
        return root->data;
    int left_lca  = findLCA(root->left, n1, n2);
    int right_lca = findLCA(root->right, n1, n2);
    if (left_lca && right_lca)  return root->data;
    return (left_lca != NULL)? left_lca: right_lca;
}

int main(){
node *root = buildTree();
print(root);
cout<<endl;
cout << "LCA(4, 5) = " << findLCA(root, 4, 5)<<endl;
cout << "LCA(4, 6) = " << findLCA(root, 4, 6)<<endl;
cout << "LCA(3, 4) = " << findLCA(root, 3, 4)<<endl;
cout << "LCA(2, 4) = " << findLCA(root, 2, 4)<<endl;
return 0;
}


