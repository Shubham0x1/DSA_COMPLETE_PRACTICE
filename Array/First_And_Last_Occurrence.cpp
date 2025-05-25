#include<bits/stdc++.h>
using namespace std;
void firstAndLast(int arr[], int n, int target){
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(first==-1){
                first=i; //First occurrence we get in array of that element.
            }
            last=i; //After that we should keep updating to check last occurrence.
        }
    }
    if(first==-1){
        cout<< "Element not found";
    }
    else{
        cout<< "First Occurrence at index: " << first << "\nLast Occurrence at index: " << last << endl;
    }
}
int main() {
    int arr[] = {4,5,6,7,3,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    firstAndLast(arr, n, target);
    return 0;
}