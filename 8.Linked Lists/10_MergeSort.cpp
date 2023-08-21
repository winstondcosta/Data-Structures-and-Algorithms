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

node* midPoint(node *head){
if(head->next==NULL || head==NULL){
return head;
}
node *slow = head;
node *fast = head->next;
while(fast!=NULL && fast->next!=NULL){
fast = fast->next->next;
slow = slow->next;
}
return slow;
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

node* mergeSort(node *head){
if(head==NULL || head->next==NULL){
return head;
}

node *mid = midPoint(head);

node *a = head;
node *b = mid->next;
mid->next = NULL;

a = mergeSort(a);
b = mergeSort(b);

node *c = merge(a,b);
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
cin>>head;
node *m = mergeSort(head);
cout<<m;
return 0;
}





