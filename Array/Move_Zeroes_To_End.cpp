#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
void moveZero(int arr[],int n){
    int nonZeroPos=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[nonZeroPos],arr[i]);
            nonZeroPos++;
        }
    }
}
int main(){
    int arr[] = {3,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZero(arr,n);
    printArray(arr,n);
    return 0;
}