#include<bits/stdc++.h>
using namespace std;
// int maxprosub(vector<int>& arr, int n){ //This is a brute force approach.
//     int maxprod=INT_MIN;
//     for(int i=0;i<n;i++){
//         int prod=1;
//         for(int j=i;j<n;j++){
//             prod=prod*arr[j];
//             maxprod=max(maxprod,prod);
//         }
//     }
//     return maxprod;
// }
int main(){
    vector<int>arr= {2,3,-4,2};
    int n=arr.size();
    int ans= maxprosub(arr,n);
    cout<< ans ;
    return 0;
}