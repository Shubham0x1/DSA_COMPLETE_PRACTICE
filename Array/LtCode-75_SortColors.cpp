#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
void SortColors(vector<int>&arr, int n){
    //Using Dutch-FlagMan Algorithm.
    int low=0;
    int mid=0;
    int high=n-1;
    for(int i=0;i<n;i++){
        if(low>high){
            break;
        }
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int>arr= {2,0,0,1,1,2,2,0};
    int n=arr.size();
    SortColors(arr,n);
    printArray(arr,n);
    return 0;
}