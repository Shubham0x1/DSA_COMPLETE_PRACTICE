#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
//First Approach:Using Sum concept.
int Missing_Number(int arr[],int n){
    int total_sum=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return total_sum-sum;
}
//Second approach:Using XOR concept.
//XOR= a^0=a and a^a=0. So if we XOR all elements from 0 to n and XOR all elements
//of array the common will cancel out and we will get the missing number.
int XOR_App(int arr[],int n){
    int XORAll=0;
    int XORArr=0;
    for(int i=0;i<=n;i++){
        XORAll=XORAll^i;
    }
    for(int i=0;i<n;i++){
        XORArr=XORArr^arr[i];
    }
    return XORAll^XORArr;
}
int main(){
    int arr[] = {3,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< XOR_App(arr,n);
    return 0;
}