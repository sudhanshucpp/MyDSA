#include<bits/stdc++.h>
using namespace std;


void printNum(int i){
    //base case
    if(i==0) return ;
    printNum(i-1);
    cout<<i<<" ";
}

int main(){

    int n ;
    cout<<"Give me the value of  n that you want me to print"<<endl;
    cin>>n;
    printNum(n);
    cout<<endl;
    return 0;
} 