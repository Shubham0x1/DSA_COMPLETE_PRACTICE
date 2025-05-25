#include<bits/stdc++.h>
using namespace std;
void printList(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
vector<int> merge_sorted_array(vector<int>& arr1, int n, vector<int>&arr2, int m){
    vector<int>arr3(n+m);
    int i=0; // For first array pointer
    int j=0; //for second array pointer
    int k=0; //for third array index.
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){ //if n1 is remaining.
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){ // if n2 is remaining
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<arr3.size();i++){
        arr1[i]=arr3[i];
    }
    return arr1;
}
int main(){
    vector<int>arr1={1,2,3,0,0,0};
    int n =3;
    vector<int>arr2={4,5,6};
    int m=arr2.size();
    vector<int>result= merge_sorted_array(arr1,n,arr2,m);
    int l=result.size();
    printList(result,l);
    return 0;
}