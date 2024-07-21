#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1 = nullptr, Node* prev1 = nullptr) {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* insertionInDLL(int data, Node* head) {
    Node* newNode = new Node(data);
    newNode->next = head;
    newNode->prev = nullptr;
    if (head != nullptr) {
        head->prev = newNode; // Link the old head back to the new node
    }
    head = newNode;
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
     cout << "null <-> " ;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

Node* deletionOfHead(Node* head) {
    if (head == nullptr) {
        return nullptr; // Corrected from '=' to '=='
    }

    Node* back = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr; // Set the previous of the new head to nullptr
    }
    back->next = nullptr; // Clear the next pointer of the old head
    delete back;
    return head;
}

int main() {
    Node* head = nullptr;
    head = insertionInDLL(40, head);
    head = insertionInDLL(30, head);
    head = insertionInDLL(20, head);
    head = insertionInDLL(10, head);
    
    printLL(head);

    cout << "After deletion of head" << endl;
    head = deletionOfHead(head);
    printLL(head);

    return 0;
}
