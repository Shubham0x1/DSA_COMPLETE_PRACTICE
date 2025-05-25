#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
//Linear Search: Just checking each element one by one with target linearly.
bool linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<< ((linearSearch(arr,n,k))?"true":"false");
    return 0;
}