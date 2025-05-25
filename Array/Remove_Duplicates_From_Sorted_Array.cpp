#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
//Using in place and logic approach. 
int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
//Using set operation.
int SetApp(int arr[],int n){
    int index=0;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        if(st.find(arr[i]) == st.end()){
            st.insert(arr[i]);
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
int main(){
    int arr[] = {0,0,1,1,1,2,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< SetApp(arr,n);
    return 0;
}