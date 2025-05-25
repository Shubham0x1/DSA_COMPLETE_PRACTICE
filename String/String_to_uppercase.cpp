#include<bits/stdc++.h>
using namespace std;
string to_upper_case(string s, int n){
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    return s;
}
int main(){
    string s= "shubham";
    int n=s.length();
    cout<< to_upper_case(s,n);
    return 0;
}