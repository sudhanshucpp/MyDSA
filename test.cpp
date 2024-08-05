#include<bits/stdc++.h>
using namespace std;

    void toLowercase(string &s){
        string temp = "";
        for(int i = 0 ; i<s.length(); i++){
            if(s[i]>='a' && s[i]<='z'){
                temp = temp+s[i];
            }else if(s[i]>='A' && s[i]<='Z'){
                char tempS = s[i] + 32;
                temp = temp + tempS;
            }else{
                temp=temp+"";
            }
        }
        s =  temp;
    }

    void reversingString(string &s ,int i , int n){
        if(i>=n/2) return ;
        swap(s[i] , s[n-i-1]);
        reversingString(s , i+1 , n);

    }

int main(){
    string s = "A man, a plan, a canal: Panama";
     toLowercase(s);
        string oldStrig = s ; 
        cout<<oldStrig<<endl;
        int n = s.length();
        reversingString(s , 0 , n);
        cout<<s<<endl;
        if(s == oldStrig){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
    return 0;
    }
