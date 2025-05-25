#include<bits/stdc++.h>
using namespace std;
int Count_MIN_JUMP(int arr[],int n){
    if(!arr[0]) return -1;
    int ans=1;
    int jump=arr[0];
    int mx=0;
    for(int i=1;i<n;i++){
        mx--;
        jump--;
        mx=max(mx,arr[i]);
        if(!jump and i!=arr.size()-1){
            jump=mx;
            mx=0;
            ans++;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,3,5,8,9,2,6,7,6,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
}