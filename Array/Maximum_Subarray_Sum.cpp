#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
//This is Kadane's Algorithm Approach, In this only positive is consider as negative
//will ultimately roll down sum to less, and we kept maxi variable to count the 
//maximum subarray sum and return maxi. 
int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    int maxi=nums[0];
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<< maxSubArray(arr);
    return 0;
}