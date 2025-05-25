#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
void inputArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
}
void countFrequency(int arr[],int n){
    for(int i=0;i<n;i++){
        bool already_counted=false;
        // Check if element is already counted or not.
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                already_counted= true;
                break;
            }
        }
        //If it is a new element count it's frequency.
        if(!already_counted){
            int freq=1;
            for(int k=i+1;k<n;k++){
                if(arr[i]==arr[k]){
                    freq++;
                }
            }
            cout << "Element " << arr[i] << " occurs " << freq << " times.\n";
        }
    }
}
int main(){
    int arr[5]={2,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr,n);
    return 0;
}