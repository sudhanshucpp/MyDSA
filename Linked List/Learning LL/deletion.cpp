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

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

Node* deleteTail(Node* head) {
    if (head == nullptr) {  
        return nullptr;
    }
    if (head->next == nullptr) { 
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {  
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr; 
    return head;
}

int main() {
    Node* head = nullptr;
    head = insertionInLL(40, head);
    head = insertionInLL(30, head);
    head = insertionInLL(20, head);
    head = insertionInLL(10, head);
    head = deleteTail(head);
    printLL(head);
    return 0;
}
