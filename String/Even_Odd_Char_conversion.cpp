#include<bits/stdc++.h>
using namespace std;
string conversion(string s, int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
        else {
            if(s[i]>='A'&& s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    return s;
}
int main(){
    string s="heLLoWoRLd";
    int n=s.length();
    cout<< conversion(s,n);
    return 0;
}