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

class Queue{
        Node * start;
        Node * end;
        int size =0;

        public:
            void push(int x){
                    Node* temp = new Node(x);
                    if(start==NULL){
                        start=end=temp;
                        size++;
                    }else{
                        end->next=temp;
                        end=temp;
                        size++;  
                    }
            }

            void pop(){
                if(start==NULL) return ;
                Node*temp=start;
                start= start->next;
                delete temp;
                size--;
            }

            int Top(){
                if(start==NULL) return -1;
                return start->data;
            }
};

int main(){

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.Top()<<endl;
    
    q.pop();
    cout<<q.Top()<<endl;
    
    q.pop();
    

    
    return 0;
}