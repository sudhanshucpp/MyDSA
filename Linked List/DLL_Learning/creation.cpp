#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

     public:
        Node(int data1 ,Node* next1 , Node* prev1 ){
            data=data1;
            next=next1;
            prev=prev1;
        }
        Node(int data1 ){
            data=data1;
            next=nullptr ;
            prev=nullptr;
        }
} ;


int main(){

   vector<int> arr ={1,2,3,4,5};
    Node*y = new Node(arr[3]);
        cout<<"Node data "<<y->data<<endl;
        cout<<"Prev "<<y->prev<<endl;
        cout<<"next "<<y->next<<endl;
    return 0;
}