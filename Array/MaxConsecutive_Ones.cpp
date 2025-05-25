#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int MaxConsecutiveOnes(int arr[],int n){
    int maxCount=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxCount= max(maxCount,count);
        }
        else{
            count=0;
        }
    }
    return maxCount;
}
int main(){
    int arr[] = {1,1,1,0,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< MaxConsecutiveOnes(arr,n);
    return 0;
}