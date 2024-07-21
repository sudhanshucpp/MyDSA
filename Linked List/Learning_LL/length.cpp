#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* insertionInLL(int data, Node* head) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

int lengthOfLL(Node * head){
    Node* temp = head;
    int cnt = 1;
    while(temp->next!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int main() {
    Node* head = nullptr;
    head = insertionInLL(40, head);
    head = insertionInLL(30, head);
    head = insertionInLL(20, head);
    head = insertionInLL(10, head);
     
    cout<<lengthOfLL(head)<<endl;
    

    return 0;
}
