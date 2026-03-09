#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number you want to reverse: ";
    cin>>n;
    int reverse=0;
    while(n>0){
        int digit=n%10; //This gives the last digit of a number.
        reverse= reverse*10+digit;
        n=n/10; // To get the remaining digit as it is.
    }
    cout<< "The reverse word is : " << reverse;
    return 0;
}