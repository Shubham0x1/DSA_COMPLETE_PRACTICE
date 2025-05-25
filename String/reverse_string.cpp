#include<bits/stdc++.h>
using namespace std;
string reversestring(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}
int main(){
    string s= "shubham";
    cout<< reversestring(s);
    return 0;
}