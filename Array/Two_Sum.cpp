#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
vector<int> twoSum(vector<int>&arr, int n, int target){
    unordered_map<int,int>mp; //When we needed to return index,we can't sort the array.
    for(int i=0;i<n;i++){
        int remaining= target-arr[i];
        if(mp.find(remaining)!=mp.end()){
            return {mp[remaining],i};
        }
        mp[arr[i]]=i;
    }
    return {};

}
int main(){
    vector<int>arr= {2,7,11,15};
    int target=9;
    int n=arr.size();
    vector<int>result=twoSum(arr,n,target);
    printArray(result,result.size());
    return 0;
}