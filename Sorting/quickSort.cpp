#include<bits/stdc++.h>
using namespace std;

int partion(int arr [ ] , int low , int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<high){
            i++;
        }
        while(arr[j]>=arr[pivot]&& j>low){
            j--;
        }
        if(i<j){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[j] , arr[low]);
    return j;
}

void quickSort(int arr [ ] , int low , int high){
    if(low<high){
        int partionIndex = partion(arr , low , high);
        quickSort(arr , low ,partionIndex-1 );
        quickSort(arr , partionIndex+1,high );
    }
}

int main(){

    int arr[] = {13,2 , 3 ,7,3 ,2 , 14 ,1 , 0 ,1 ,100,6 , -1};
    for(auto it : arr) cout<<it<<" ";
    
    cout<<endl;
    quickSort(arr , 0 , 12);
    for(auto it : arr) cout<<it<<" ";
    cout<<endl;
    return 0;
}