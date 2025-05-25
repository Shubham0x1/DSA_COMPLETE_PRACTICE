#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number you want to reverse: ";
    cin>>n;
    long reverse=0;
    while(n!=0){ //to handle the negative integer like -123.
        int digit=n%10; //This gives the last digit of a number.
        reverse= reverse*10+digit;
        n=n/10; // To get the remaining digit as it is.
    }
    if(reverse<INT_MIN || reverse>INT_MAX){
        return 0; // Integer overflow testing,if out of integer range.
    }
    cout<< "The reverse word is : " << reverse;
    return 0;
}