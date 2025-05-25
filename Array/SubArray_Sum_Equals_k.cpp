#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k,int n) {
    unordered_map<int,int>prefixSumFreq;
    prefixSumFreq[0]=1;
    int currSum=0;
    int count=0;
    for(int i=0;i<n;i++){
        currSum+=nums[i];
        if(prefixSumFreq.find(currSum-k)!= prefixSumFreq.end()){
            count+=prefixSumFreq[currSum-k];
        }
        prefixSumFreq[currSum]++;
    }
    return count;
}
int main(){
    vector<int>arr= {1,2,3};
    int k=3;
    int n=arr.size();        
    cout<< subarraySum(arr,k,n);
    return 0;
}
//In this approach we created an unordered map of i and frequency.And for base case 
//taken 0 as i and its count as 1, we created two variable which we want. currSum to
// store the current sum till now and count which we want to return as result. 
// iterating over the loop and we updated currSum+=nums[i], then checks if 
// map contain the currSum-k value in map or not if contain then update the count with
// map[currSum-k] means its frequency.and if not found in map just update the currSum
// frequency in map.