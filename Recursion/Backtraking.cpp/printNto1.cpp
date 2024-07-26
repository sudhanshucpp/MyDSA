#include<bits/stdc++.h>
using namespace std;


//bactraking function executeded and then back to the last function

void printNum(int i , int n){
   if(i>n) return;
   printNum(i+1 , n);
   cout<<i<<" ";
}

int main(){

    int n ;
    cout<<"Give me the value of  n that you want me to print"<<endl;
    cin>>n;
    printNum(1 , n);
    cout<<endl;
    return 0;
}