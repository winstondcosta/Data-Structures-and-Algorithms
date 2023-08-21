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

node *insertInBST(node *root,int data){
if(root==NULL){
    return new node(data);
}
if(data<=root->data){
    root->left = insertInBST(root->left,data);
}
if(data>root->data){
    root->right = insertInBST(root->right,data);
}
return root;
}

node *build(){
int d;
cin>>d;
node* root = NULL;
while(d!=-1){
    root = insertInBST(root,d);
    cin>>d;
}
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

void inorderIterative(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

void preorderIterative(node* root)
{
    if (root == NULL)
        return;
    stack<node*> nodeStack;
    nodeStack.push(root);
    while (nodeStack.empty() == false) {
        node* node = nodeStack.top();
        printf("%d ", node->data);
        nodeStack.pop();
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
}

void postorderIterative(node* root)
{
    if (root == NULL)
        return;
    stack<node *> s1, s2;
    s1.push(root);
    node* node;
    while (!s1.empty()) {
        node = s1.top();
        s1.pop();
        s2.push(node);
        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }
    while (!s2.empty()) {
        node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
}

int main(){
node *root = build();
bfs(root);
cout<<endl;
inorderIterative(root);
preorderIterative(root);
postorderIterative(root);
return 0;
}



