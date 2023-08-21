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
node *tail = head;
while(tail->next!=NULL){
tail = tail->next;
}
node *n = new node(data);
tail->next = n;
return;
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

bool searchRecursive(node *head,int key){
if(head==NULL){
return false;
}
if(head->data == key){
return true;
}
else{
return searchRecursive(head->next,key);
}
}

bool searchIterative(node *head,int key){
while(head!=NULL){
if(head->data == key){
return true;
}
else{
head = head->next;
}
}
return false;
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
insertAtTail(head,5);
insertAtMiddle(head,3,3);
print(head);
int key;
cin>>key;
if(searchIterative(head,key)){
cout<<"Element found"<<endl;
}
else{
cout<<"Element not found"<<endl;
}
return 0;
}
