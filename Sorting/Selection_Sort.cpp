#include<bits/stdc++.h>
using namespace std;
void selection_Sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx !=i){
            swap(arr[i],arr[min_idx]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_Sort(arr,n);
    printArray(arr,n);
    return 0;
}