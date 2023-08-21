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
    stack<node*> s;
    s.push(root);
    while (s.empty() == false) {
        node* curr = s.top();
        cout<<curr->data<<" ";
        s.pop();
        if (curr->right)
            s.push(curr->right);
        if (curr->left)
            s.push(curr->left);
    }
}

void postorderIterative(node* root)
{
    if (root == NULL)
        return;
    stack<node *> s1, s2;
    s1.push(root);
    node* curr;
    while (!s1.empty()) {
        curr = s1.top();
        s1.pop();
        s2.push(curr);
        if (curr->left)
            s1.push(curr->left);
        if (curr->right)
            s1.push(curr->right);
    }
    while (!s2.empty()) {
        curr = s2.top();
        s2.pop();
        cout << curr->data << " ";
    }
}

int main(){
node *root = build();
bfs(root);
cout<<endl;
inorderIterative(root);
cout<<endl;
preorderIterative(root);
cout<<endl;
postorderIterative(root);
return 0;
}



