#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
vector<int> findUnion(int arr1[], int n, int arr2[], int m){
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n && j<m){
        //skipping the duplicates in a.
        while(i>0 && i<n && arr1[i]==arr1[i-1]) i++;
        while(j>0 && j<m && arr2[j]==arr2[j-1])j++;
        if(i<n && j<m){
            if(arr1[i]< arr2[j]){
                temp.push_back(arr1[i]);
                i++;
            }
            else if(arr2[j]<arr1[i]){
                temp.push_back(arr2[j]);
                j++;
            }
            else{
                temp.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    }
    //Remaining elements of arr1.
    while(i<n){
        if(i==0 || arr1[i]!=arr1[i-1]){
            temp.push_back(arr1[i]);
        }
        i++;
    }
    //Remaining elements of arr2.
    while(j<m){
        if(j==0 || arr2[j]!=arr2[j-1]){
            temp.push_back(arr2[j]);
        }
        j++;
    }
    //Print result.
    for(int num: temp){
        cout<< num << " ";
    }
    cout<< endl;
}
int main(){
    int arr1[] = {2,2,3,4,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {1,1,2,3,4};
    int m=sizeof(arr2)/sizeof(arr2[0]);
    findUnion(arr1,n,arr2,m);
    return 0;
}