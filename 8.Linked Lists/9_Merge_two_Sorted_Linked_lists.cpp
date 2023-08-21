#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    //constructor for creating a node
    node(int d){
    data = d;
    next = NULL;
    }
};

void insertAtHead(node *&head,int data){
node *n = new node(data);
n->next = head;
head = n;
}

void insertAtTail(node *&head,int data){
if(head==NULL){
insertAtHead(head,data);
}
else{
node *tail = head;
while(tail->next!=NULL){
tail = tail->next;
}
node *n = new node(data);
tail->next = n;
return;
}
}

node* merge(node *a,node *b){
if(a==NULL){
return b;
}
else if(b==NULL){
return a;
}
node *c;
if(a->data<b->data){
c = a;
c->next = merge(a->next,b);
}
else{
c = b;
c->next = merge(a,b->next);
}
return c;
}

void takeInput(node *&head){
int data;
cin>>data;
while(data!=-1){
insertAtTail(head,data);
cin>>data;
}
}
void print(node *head){
while(head!=NULL){
cout<<head->data<<"->";
head = head->next;
}
cout<<endl;
}

istream& operator>>(istream &is,node *&head){
takeInput(head);
return is;
}

ostream& operator<<(ostream &os,node *&head){
print(head);
return os;
}

int main(){
node *head = NULL;
node *head2 = NULL;
cin>>head>>head2;
cout<<head<<head2;
node *m = merge(head,head2);
cout<<m;
return 0;
}




