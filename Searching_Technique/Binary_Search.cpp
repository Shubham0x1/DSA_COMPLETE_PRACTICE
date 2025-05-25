#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int Binary_Search(int arr[], int n, int k){
    int low=0;
    int high=n-1;
    int mid=low -((low-high)/2);
    while(low<high){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        low++;
        high--;
    }
}
int main(){
    int arr[] = {1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<< Binary_Search(arr,n,k);
    return 0;
}