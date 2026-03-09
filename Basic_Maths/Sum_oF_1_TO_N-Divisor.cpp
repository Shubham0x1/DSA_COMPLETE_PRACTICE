#include<bits/stdc++.h>
using namespace std;
int Sum_Of_Divisor(int n){
    int ans=0;
    for(int i=1;i<=n;i++){ //To do this we count the frequency of each digit and multiply it by i
        ans+=(n/i)*i;
    }
    return ans;
}
int main(){
    int n;
    cout<< "Enter the number till you want sum of: ";
    cin>> n;
    cout<< Sum_Of_Divisor(n);
}