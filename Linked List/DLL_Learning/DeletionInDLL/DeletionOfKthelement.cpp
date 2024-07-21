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

Node* deletionOfKthElement(Node* head  , int k) {
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* temp = head;
    int cnt = 0;
    while(cnt<k){
        temp=temp->next;
        cnt++;
    }
    Node * back= temp->prev;
    Node* front=temp->next;
    back->next=front;
    front->prev=back;
    delete temp;
    return head;

}

int main() {
    Node* head = nullptr;
    head = insertionInDLL(40, head);
    head = insertionInDLL(30, head);
    head = insertionInDLL(20, head);
    head = insertionInDLL(10, head);
    
    printLL(head);

    cout << "After deletion of kth" << endl;
    head = deletionOfKthElement(head , 1);
    printLL(head);

    return 0;
}
