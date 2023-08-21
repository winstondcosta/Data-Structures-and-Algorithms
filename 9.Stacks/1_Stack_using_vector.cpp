#include<bits/stdc++.h>
using namespace std;
class Stack{
private:
    vector<int> v;
public:
    void push(int data){
        v.push_back(data);
    }

    bool isEmpty(){
        return v.size()==0;
    }

    void pop(){
        if(!isEmpty()){
        v.pop_back();
        }
    }
    int top(){
        return v.back();
    }
};

int main(){
Stack s;
for(int i=1;i<=5;i++){
s.push(i*i);
}
while(!s.isEmpty()){
cout<<s.top()<<endl;
s.pop();
}
return 0;
}
