#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i , int arr[] , int n ){
    if(i>=n/2) return;
    swap(arr[i] , arr[n-i-1]);
    reverseArray(i+1 , arr , n );
}


int main(){
    int arr [] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before reverse "<<endl;
    for(auto it : arr) cout<<it<<" ";
    cout<<endl;
    reverseArray(0 , arr , n);
    cout<<"Array after reverse "<<endl;
    for(auto it : arr) cout<<it<<" ";
    cout<<endl;
    return 0;
}