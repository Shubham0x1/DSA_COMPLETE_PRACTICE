#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>& arr,int k){
    int n=arr.size();
    int currentSum=0;
    int maxSum=0;
    if(n<k){
        return 0;
    }
    //First Window;
    for(int i=0;i<k;i++){
        currentSum+=arr[i];
    }
    maxSum=currentSum;
    //Second Window;
    for(int i=k;i<n;i++){
        currentSum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}
int main(){
    vector<int>arr = {5,1,6,3,8,2};
    int n= arr.size();
    int k=3;
    cout<< maxSum(arr,k);
}