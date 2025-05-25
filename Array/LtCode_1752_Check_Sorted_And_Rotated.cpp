#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
bool check(int arr[],int n){
    //We have to count the drops if it is more than one then rotation with sorting is not
    //not possible and if yes then return true.
    //(i+1)%n to check last element with first.
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]> arr[(i+1)%n]){
            count++;
        }
    }
    return count<=1;
}
int main(){
    int arr[] = {2,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< (check(arr,n)?"true": "false");
    return 0;
}