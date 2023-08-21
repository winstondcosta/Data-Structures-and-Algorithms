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

int len(node *head){
int l=0;
while(head!=NULL){
head = head->next;
l++;
}
return l;
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

void takeInput(node *&head){
int data;
cin>>data;
while(data!=-1){
insertAtTail(head,data);
cin>>data;
}
}

void reverseList(node *&head){
node *P = NULL;
node *C = head;
node *N;
while(C!=NULL){
N = C->next;
C->next = P;
P = C;
C = N;
}
head = P;
}

node* recursiveReverse(node *&head){
if(head->next==NULL || head==NULL){
return head;
}
node *smallhead = recursiveReverse(head->next);
node* cur = head;
cur->next->next = cur;
cur->next = NULL;
return smallhead;
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
cin>>head;
//reverseList(head);
head = recursiveReverse(head);
cout<<head;
return 0;
}

