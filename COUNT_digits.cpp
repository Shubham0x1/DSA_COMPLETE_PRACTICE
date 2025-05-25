#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int count=0;
    while(n>0){
        count=count+1;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cout<< "Enter the number you want to count digit of: ";
    cin>>n;
    cout<< countDigits(n); 
    return 0;
}
//Another GFG Question we can use it to count n evenly divisible digits.
//store the number in any variable. take count variable as 0.while(n>0) we will take the
//last digit using module 10 and then check if digit is 0 or not and if it can divide
//whole number or not if yes increase the count and at the end return the count.
