#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
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
 
int main() {
    Node* head = nullptr;
    head = insertionInLL(40, head);
    head = insertionInLL(30, head);
    head = insertionInLL(20, head);
    head = insertionInLL(10, head);
    printLL(head);
    return 0;
}
