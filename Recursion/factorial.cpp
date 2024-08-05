#include<bits/stdc++.h>
using namespace std;


int factorial(int i){
  if(i == 0) return 1;
  if(i==1) return 1;

  return i *  factorial(i-1);
}

int main(){

    int n ;
    cout<<"Give me the value of  n that you want me factorial upto there"<<endl;
    cin>>n;
    int total = factorial(n);
    cout<<"Factorial of "<<n<<"is: "<<total<<endl;
    return 0;
}