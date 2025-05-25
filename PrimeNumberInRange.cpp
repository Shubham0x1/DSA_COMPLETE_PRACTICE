#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){ //Function to check if a number is prime or not.
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<< "Enter the starting range number: ";
    cin>>n;
    int m;
    cout<< "Enter the ending range number: ";
    cin>>m;
    for(int i=n;i<=m;i++){ //Looping to check between the n and m range of prime numbers.
        if(isPrime(i)){
            cout<< i << " ";
        }
    }
    return 0;
}