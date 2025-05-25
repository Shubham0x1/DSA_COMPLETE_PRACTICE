#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
void findLeaders(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main(){
    int arr[] = {5,1,6,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    findLeaders(arr,n);
}