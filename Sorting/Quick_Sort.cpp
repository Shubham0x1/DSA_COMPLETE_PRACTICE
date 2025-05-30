#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(int arr[], int low,int high){
    if(low<high){
        int pIndex= partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}
int main(){
    int arr[]={10,9,8,5,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    qs(arr,0,n-1);
    printArray(arr,n);
}