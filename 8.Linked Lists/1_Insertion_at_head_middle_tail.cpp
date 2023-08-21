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

void insertAtMiddle(node *&head,int data,int p){
if(head==NULL || p==0){
insertAtHead(head,data);
}
else if(p>len(head)){
insertAtTail(head,data);
}
else{
int jump = 1;
node *temp = head;
while(jump<p){
temp = temp->next;
jump++;
}
node *n = new node(data);
n->next = temp->next;
temp->next = n;
}
}
void print(node *head){
while(head!=NULL){
cout<<head->data<<"->";
head = head->next;
}
cout<<endl;
}

int main(){
node *head = NULL;
insertAtHead(head,2);
insertAtHead(head,1);
insertAtTail(head,4);
insertAtMiddle(head,3,3);
print(head);
return 0;
}
