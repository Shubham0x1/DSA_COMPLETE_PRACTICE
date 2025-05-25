#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<< "Enter the number till you want fibonacci series: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<< fibo(i) << " ";
    }
    return 0;
}