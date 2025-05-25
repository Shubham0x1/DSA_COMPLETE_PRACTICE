#include<bits/stdc++.h>
using namespace std;
int FindIndex(string s, int n){
    for(int i=0;i<n;i++){
        if(s[i]=='@'){
            return i;
        }
    }
    return -1;
}
int main(){
    string s="someone@gmail.com";
    int n=s.length();
    int m= FindIndex(s,n);
    if(m!=-1){
        cout<< s.substr(m+1);
    }
    else{
        cout<< "Invalid email: @ not found";
    }
    return 0;
}