#include<bits/stdc++.h>
using namespace std;

// implement stack using queue

class Stack {
    queue <int> q ; 

    public:
        void push(int x){
            int s = q.size();
            q.push(x);
            for(int i =0 ; i<s ; i++){
                q.push(q.front());
                q.pop();
            }
        }

        int Pop(){
                int n = q.front();
                q.pop();
                return n;
        }

        int Top(){
            int n = q.front();
            return n;
        }

        int Size(){
            return q.size();
        }
};

int main(){

        Stack s;
        s.push(1);
        s.push(2);
        s.push(3);
        cout<<s.Top()<<endl;
        s.Pop();
        cout<<s.Top()<<endl;
        cout<<s.Size()<<endl;

    return 0;
}