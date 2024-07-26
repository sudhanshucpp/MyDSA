#include<bits/stdc++.h>
using namespace std;


void printNum(int i , int n){
    //base case
    if(i == 0) return ;
    cout<<i<<" ";
    printNum(i-1,n);
}

int main(){

    int n ;
    cout<<"Give me the value of  n that you want me to print"<<endl;
    cin>>n;
    printNum(n , n);
    cout<<endl;
    return 0;
}