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
void zigzagtraversal(node* root)
{
    if (!root)
        return;

    stack<node*> currentlevel;
    stack<node*> nextlevel;
    currentlevel.push(root);
    bool lefttoright = true;
    while (!currentlevel.empty()) {
        node* temp = currentlevel.top();
        currentlevel.pop();
        if (temp) {
            cout << temp->data << " ";
            if (lefttoright) {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }

        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
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
//print(root);
zigzagtraversal(root);
return 0;
}
