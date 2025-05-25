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
void AddressArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< &arr[i] << " ";
    }
}
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int secondlargest(int arr[],int n){
    int largest=arr[0];
    int secondlargest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest= largest;
            largest=arr[i];
        }
    }
    return secondlargest;
}
int count(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==4){
            count++;
        }
    }
    return count;
}
void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    inputArray(arr,n);
    printArray(arr,n);
    cout<< endl;
    //AddressArray(arr,n);
    //cout<< sum(arr,n);
    //cout<< "The largest element is " << largest(arr,n);
    // cout<< "The second largest element is " << secondlargest(arr,n);
    //cout<< "The count of 4 is is " << count(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);
    return 0;
}