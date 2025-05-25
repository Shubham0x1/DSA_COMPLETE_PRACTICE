#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n){
    int low=0;
    int high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int main(){
    int arr[]={1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<< "The array before reverse: ";
    printArray(arr,n);
    cout<< endl;
    cout<< "The array after reverse: ";
    reverseArray(arr,n);
    printArray(arr,n);
}