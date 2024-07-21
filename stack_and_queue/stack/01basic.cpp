#include <bits/stdc++.h>
using namespace std;

//stack  LIFO => last in first out
// push() , pull() , top() , size() , isEmpty() , isFull()

int main() {
    
    stack <int> st ;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"stack at top "<<st.top()<<endl;
    cout<<"Lets pop()"<<endl;
    st.pop();
    cout<<"stack at top "<<st.top()<<endl;
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;
}