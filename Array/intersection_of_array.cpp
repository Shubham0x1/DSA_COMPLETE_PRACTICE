#include<bits/stdc++.h>
using namespace std;
void printArray(const vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
vector<int> intersection_array(vector<int>& arr1, int n, vector<int>&arr2, int m){
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr1[i]]++;
    }
    vector<int>ans;
    for(int i=0;i<m;i++){
        if(freq[arr2[i]]>0){
            ans.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }
    return ans;
}
int main(){
    vector<int>arr1={1,2,2,3,4};
    int n =arr1.size();
    vector<int>arr2={2,2,4,4,5};
    int m=arr2.size();
    vector<int>result= intersection_array(arr1,n,arr2,m);
    int l=result.size();
    printArray(result,l);
    return 0;
}