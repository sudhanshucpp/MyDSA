#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st1 , st2;

    public:
        void  push(int x){
            st1.push(x);
        }

    void pop(){
        if(! st2.empty()){
            st2.pop();
        }else{
            while(st1.size()){
                st2.push(st1.top());
                st1.pop();
            }
            st2.pop();
        }
    }
    
    int Top(){
        if(!st2.empty()){
            return st2.top();
        }else{
            while(st1.size()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
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



    return 0;
}   