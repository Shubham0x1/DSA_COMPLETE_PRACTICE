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
    reverse(arr,arr+(n-k)); //In vector array using .begin() and .end().
    reverse(arr+(n-k),arr+n);
}
void rotatArray(int arr[],int n,int k){
    k=k%n;
    int j=1;
    while(j<=k){
        int temp=arr[0];
        for(int i=1;i<n;i++){
          arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
        j++;
    }
}
int main(){
    int arr[] = {1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    //rotatArray(arr,n,k);
    Rotate(arr,n,k);
    printArray(arr,n);
    return 0;
}