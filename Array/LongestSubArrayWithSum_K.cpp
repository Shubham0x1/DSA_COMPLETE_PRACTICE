#include <bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& arr, int k) {
    int n=arr.size();
    unordered_map<int,int>prefixMap;
    int prefixSum=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        prefixSum=prefixSum+arr[i];
        if(prefixSum==k){
            maxlen=i+1;
        }
        if(prefixMap.find(prefixSum-k)!=prefixMap.end()){
            maxlen=max(maxlen,i-prefixMap[prefixSum-k]);
        }
        if(prefixMap.find(prefixSum)==prefixMap.end()){
            prefixMap[prefixSum]=i;
        }
    }
    return maxlen;
}
int main(){
    vector<int>arr={10,5,2,7,1,-10};
    int k=15;
    cout<< longestSubarray(arr,k);
    return 0;
}
// We use the concept of prefixSum and hashmap as prefixMap. Take as maxlen
// and prefixSum. Iterate over full array and store element to prefixSum and check
// if prefixSum is equal to k(given sum)if it is keep maxlen as i+1 as we started with
// 0 index. Check for prefixSum-k is there in hashmap or not. If it is already
// update the maxlen using max(maxlen,i-prefixMap[prefixSum-k]).And if it is also
// not present update it in prefixMap with index.  