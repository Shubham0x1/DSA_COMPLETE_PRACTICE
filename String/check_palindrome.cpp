#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s="abbbba";
    cout<< (checkpalindrome(s)? "true": "false");
}