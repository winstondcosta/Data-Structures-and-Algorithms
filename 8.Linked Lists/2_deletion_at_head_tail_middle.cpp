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

void deleteAtHead(node *&head){
if(head == NULL){
return;
}
node *temp = head;
head = head->next;
delete temp;
return;
}

void deleteAtTail(node *&head){
node *prev = NULL;
node *temp = head;
while(temp->next!=NULL){
prev = temp;
temp = temp->next;
}
delete temp;
prev->next = NULL;
return;
}

void deleteAtMiddle(node *&head,int p){
if(head==NULL){
return;
}

else if(head->next==NULL){
deleteAtHead(head);
}
else{
node *prev = NULL;
node *temp = head;
int jump=0;
while(jump<p){
prev = temp;
temp = temp->next;
jump++;
}

prev->next = temp->next;
delete temp;
return;
}
}
int main(){
node *head = NULL;
insertAtHead(head,2);
insertAtHead(head,1);
insertAtTail(head,4);
insertAtTail(head,5);
insertAtMiddle(head,3,2);
print(head);
deleteAtHead(head);
deleteAtTail(head);
print(head);
deleteAtMiddle(head,1);
print(head);
return 0;
}
