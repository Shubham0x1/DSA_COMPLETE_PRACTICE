#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
void Rotate(int arr[],int n,int k){
    k=k%n;
    reverse(arr,arr+n); //In static array reverse is used like that
    reverse(arr,arr+k); //In vector array using .begin() and .end().
    reverse(arr+k,arr+n);
}
int main(){
    int arr[] = {1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    Rotate(arr,n,k);
    printArray(arr,n);
    return 0;
}