#include<bits/stdc++.h>
using namespace std;
void bubble_Sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    bubble_Sort(arr,n);
    printArray(arr,n);
    return 0;
}

//We can do recursive bubble sort as well using this concept of taking the largest element
//to the last into ending and iterating it till n-1.

class Solution {
    public:
      void bubble_sort(vector<int>&arr, int n){
          if(n==1){
              return;
          }
          for(int i=0;i<n-1;i++){
              if(arr[i]>arr[i+1]){
                  swap(arr[i],arr[i+1]);
              }
          }
          bubble_sort(arr,n-1);
      }
      // Function to sort the array using bubble sort algorithm.
      void bubbleSort(vector<int>& arr) {
          int n=arr.size();
          bubble_sort(arr,n);
      }
  };
  