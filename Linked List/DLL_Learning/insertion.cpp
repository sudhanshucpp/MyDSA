#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

     public:
        Node(int data1 ,Node* next1=nullptr , Node* prev1=nullptr){
            data=data1;
            next=next1;
            prev=prev1;
        }

} ;

Node * insertionInDLL(int data , Node* head){
    Node* newNode = new Node(data);
    newNode->next=head;
    newNode->prev=nullptr;
    head=newNode;
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout <<"null <-> "<< temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

int main(){

   Node * head = nullptr;
   head = insertionInDLL(40 , head);
   head = insertionInDLL(30 , head);
   head = insertionInDLL(20 , head);
   head = insertionInDLL(10 , head);
   printLL(head);
    return 0;
}