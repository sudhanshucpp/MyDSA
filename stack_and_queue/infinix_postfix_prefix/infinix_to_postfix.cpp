#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    int priorityValue = 0;
    if(ch == '^'){
        priorityValue = 3;
    } else if(ch == '*' || ch == '/'){
        priorityValue = 2;
    } else if(ch == '+' || ch == '-'){
        priorityValue = 1;
    } else {
        priorityValue = -1;
    }
    return priorityValue;
}

string infixToPostfix(string str){
    string ans = "";
    stack<char> s;
    int i = 0;
    while(i < str.length()){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')){
            ans += str[i];
        } else if(str[i] == '('){
            s.push(str[i]);
        } else if(str[i] == ')'){
            while(!s.empty() && s.top() != '('){
                ans += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while(!s.empty() && priority(str[i]) <= priority(s.top())){
                ans += s.top();
                s.pop();
            }
            s.push(str[i]);
        }
        i++;
    }

    while(!s.empty()){
        ans += s.top();
        s.pop();
    }

    return ans;
}

int main(){
    string str = "a+b*(c^d-e)";
    cout << "Converting our infix string to postfix: " << str << " --> ";
    string postfixStr = infixToPostfix(str);
    cout << postfixStr << endl;

    return 0;
}
