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

node* kthnode(node *head, int k){
if(head->next==NULL || head==NULL){
return head;
}
node *slow = head;
node *fast = head;;
for(int i=0;i<k;i++){
fast = fast->next;
}

while(fast!=NULL){
fast = fast->next;
slow = slow->next;
}
return slow;
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
cout<<head;
int k;
cin>>k;
node *ele = kthnode(head,k);
cout<<ele->data<<endl;
return 0;
}



