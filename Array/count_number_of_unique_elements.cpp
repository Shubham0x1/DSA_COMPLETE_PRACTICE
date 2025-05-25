#include<bits/stdc++.h>
using namespace std;
int countunique(const vector<int>& arr, int n){
    //This is better approach.
    // unordered_map<int,int>freq;
    // for(int i=0;i<n;i++){
    //     freq[arr[i]]++;
    // }
    // int count=0;
    // for(auto it:freq){
    //     if(it.second>=1){
    //         count++; 
    //     }
    // }
    // return count;

    //Brute force approach.
    int count=0;
    for(int i=0;i<n;i++){
        bool is_unique=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                is_unique= false;
                break;
            }
        }
        if(is_unique){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int ans= countunique(arr,n);
    cout<< ans;
    return 0;
}