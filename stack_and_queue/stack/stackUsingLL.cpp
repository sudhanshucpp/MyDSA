#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data1 , Node* next1){
            data = data1;
            next=next1;
        }
        Node(int data1){
            data = data1;
            next=nullptr;
        }
};

class Stack{
    Node* top;
    int size = 0;

    public:
        void push(int x){
            Node* temp = new Node(x);
             temp->next = top;
             top=temp;
             size++;
        }

        void pop(){
            Node* temp = top;
            top=top->next;
            delete temp;
            size--;
        }

        int Top(){
            return top->data;
        }

        int Size(){
            return size;
        }
};

int main(){

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    s.pop();
    cout<<s.Size()<<endl;

    
    return 0;
}