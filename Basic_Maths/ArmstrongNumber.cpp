#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    return count;
}
int sumofPower(int n, int power){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+pow(digit,power);
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number to check armstrong  number or not: ";
    cin>>n;
    int digitsCount= countDigits(n);
    if(n==sumofPower(n,digitsCount)){
        cout<< "It is an armstrong number";
    }
    else{
        cout<< "It is not an armstrong number";
    }
    return 0;
}