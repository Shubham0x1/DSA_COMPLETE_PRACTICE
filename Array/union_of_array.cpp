#include<bits/stdc++.h>
using namespace std;
void printList(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
vector<int> union_sorted_array(vector<int>& arr1, int n, vector<int>&arr2, int m){
    vector<int>arr3;
    int i=0; // For first array pointer
    int j=0; //for second array pointer
    while(i<n && j<m){
        if(i>0 && arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        if(j>0 && arr2[j]==arr2[j-1]){
            j++;
            continue;
        }
        if(i>=n && j>=m){
            break;
        }
        if(arr1[i]<arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j]<arr1[i]){
            arr3.push_back(arr2[j]);
            j++;
        }
        else{
            arr3.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        if(i==0 || arr1[i]!=arr1[i-1]){
            arr3.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(j==0 || arr2[j]!=arr2[j-1]){
            arr3.push_back(arr2[j]);
        }
        j++;
    }
    return arr3;
}
int main(){
    vector<int>arr1={1,1,2,2,3};
    int n =arr1.size();
    vector<int>arr2={1,2,2,3,5};
    int m=arr2.size();
    vector<int>result= union_sorted_array(arr1,n,arr2,m);
    int l=result.size();
    printList(result,l);
    return 0;
}