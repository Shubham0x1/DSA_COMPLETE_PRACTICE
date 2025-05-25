#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
//Concept:We sort the array and if element is more than n/2 times then it will always be
//at n/2 in sorted array so return that element.
int MajorityElement(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n/2];
}
//Approach:2
//Boyer-Moore-Voting Algorithm.
// We will use basic general concept of taking the first element and count as 1
// Then using looping and logical approach of getting the majority element.
int BoyerMooreAlgorithm(vector<int>&arr,int n){
    int candidate= arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
        else {
            count--;
            if(count==0){
                candidate=arr[i];
                count=1;
            }
        }
    }
    return candidate;
}
int main(){
    vector<int>arr= {3,0,3}; //In this case we have assumed we always have one element
    int n=arr.size();        //more than n/2 times.
    cout<< BoyerMooreAlgorithm(arr,n);
    return 0;
}
//Why Boyer-Moore-Voting Works?
//Because the majority element occurs more than n/2 times,
//all other elements together cannot "cancel it out".
