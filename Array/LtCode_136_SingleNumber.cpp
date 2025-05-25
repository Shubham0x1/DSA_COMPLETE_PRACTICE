#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
//XOR operation to remove the duplicate elements.
int SingleNumber(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    return result;
}
int main(){
    int arr[] = {3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< SingleNumber(arr,n);
    return 0;
}