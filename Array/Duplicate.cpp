#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicate(vector<int>&arr,int n){
    vector<int>result;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            result.push_back(arr[i]);]
            
        }
    }
    return result;
}
int main(){
    vector<int>arr={1,2,2,3,1};
    int n=arr.size();
    findDuplicate(arr,n);
    for(int i=0;i<result.size();i++){

    }
}