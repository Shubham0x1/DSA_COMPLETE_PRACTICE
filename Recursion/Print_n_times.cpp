#include<bits/stdc++.h>
using namespace std;
void printGfg(int n){
    if(n==0){
        return;
    }
    cout<< "GFG" << " ";
    printGfg(n-1);
}
int main(){
    int n;
    cin>>n;
    printGfg(n);
    return 0;
}