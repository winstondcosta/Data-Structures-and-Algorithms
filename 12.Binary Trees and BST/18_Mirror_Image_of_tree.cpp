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

//ascending order
void inorder(node *root){
if(root==NULL){
    return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
return;
}

bool isSymmetric(node* root)
{
    if(root == NULL)
        return true;
    if(!root->left && !root->right)
        return true;
    queue <node*> q;
    q.push(root);
    q.push(root);
    node* leftNode, *rightNode;
    while(!q.empty()){
        leftNode = q.front();
        q.pop();
        rightNode = q.front();
        q.pop();
        if(leftNode->data != rightNode->data){
        return false;
        }
        if(leftNode->left && rightNode->right){
            q.push(leftNode->left);
            q.push(rightNode->right);
        }
        else if (leftNode->left || rightNode->right)
        return false;
        if(leftNode->right && rightNode->left){
            q.push(leftNode->right);
            q.push(rightNode->left);
        }
        else if(leftNode->right || rightNode->left)
        return false;
    }
    return true;
}
int main(){
node *root = buildTree();
bfs(root);
cout<<endl;
if(isSymmetric(root))
        cout << "The given tree is Symmetric";
    else
        cout << "The given tree is not Symmetric";
    return 0;
return 0;
}



