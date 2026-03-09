#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){ //this is euclidean theorem.
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int n;
    cout<< "Enter the first number: ";
    cin>>n;
    int m;
    cout<< "Enter the second number: ";
    cin>>m;
    cout<< "The GCD OF " << n << " and " << m << " is "<< GCD(n,m);
    return 0; 
}
//LCM can be found by using formula: (lCM*HCF=Product of two numbers).