#include<bits/stdc++.h>
using namespace std;

class Stack{
        int size ;
        int top ;
        int * arr ;
    
    public :
        Stack(){
            size = 1000;
            top = -1 ;
             arr = new int[size];
        }

        void push(int num){
            top++;
            arr[top] = num;
        }

        void pop(){
            top--;
        }

        int Top(){
            int x = arr[top];
            return x;
        }

        int Size(){
            return top+1;
        }

        bool  full(){
            if(size == top+1) return true ;
            return false;
        }

        bool empty(){
            if(top == -1) return true ; 
            return false;
        }
};


int main(){

        Stack s ;
        s.push(1);
        s.push(2);
        s.push(3);
        cout<<s.Top()<<endl;
        s.pop();
        cout<<s.Top()<<endl;

    return 0;
}