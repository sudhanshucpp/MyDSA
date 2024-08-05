#include<bits/stdc++.h>
using namespace std;


int sum(int i){
  if(i == 0) return 0;

  return i + sum(i-1);
}

int main(){

    int n ;
    cout<<"Give me the value of  n that you want me sum upto there"<<endl;
    cin>>n;
    int total = sum(n);
    cout<<"Total from 0 to "<<n<<"is: "<<total<<endl;
    return 0;
}