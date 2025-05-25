#include<bits/stdc++.h>
using namespace std;
vector<int> arranged(vector<int>& arr) {
    int n=arr.size();
    int posIndex=0;
    int negIndex=1;
    vector<int>result(n);
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            result[posIndex]=arr[i];
            posIndex+=2;
        }
        else{
            result[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    return result;
}
int main(){
    vector<int>arr={-1,2,-3,4,-5,6};
    vector<int>result =arranged(arr);
    cout << "Rearranged array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}