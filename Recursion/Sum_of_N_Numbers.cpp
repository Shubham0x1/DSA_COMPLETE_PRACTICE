#include<bits/stdc++.h>
using namespace std;
int sum_of_N_terms(int n){
    if(n==0){
        return 0;
    }
    return n+sum_of_N_terms(n-1); //To print any series sum we can modify n values.
}
int main(){
    int n;
    cin>>n;
    cout<< sum_of_N_terms(n) << endl;
    return 0;
}