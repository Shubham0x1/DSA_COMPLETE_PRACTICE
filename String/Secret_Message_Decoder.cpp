#include<bits/stdc++.h>
using namespace std;
string secretMessage(string s, int n){
    string result="";
    for(int i=0;i<n;i++){
        int m=int(s[i]);
        int r= m-i;
        char ch= char(r);
        result+=ch;
    }
    return result;
}
int main(){
    string s= "acegi";
    int n=s.length();
    cout<< secretMessage(s,n);
    return 0;
}