#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int>&arr, int n, int k){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low -((low-high)/2);
        if(arr[mid]==k){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,3,3,4,5,6,7};
    int n=arr.size();
    cout<< Binary_Search(arr,n,3);
    return 0;
}