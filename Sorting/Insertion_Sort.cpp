#include<bits/stdc++.h>
using namespace std;
void insertion_Sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertion_Sort(arr,n);
    printArray(arr,n);
    return 0;
}

//We can do recursive insertion sort as well.
//by using if n<=1 return (base case) and first sorting the n-1 elements.
//taking last element as n-1 and j as n-2 and rest using the same concept of 
//while loop of j. 
