#include<bits/stdc++.h>
using namespace std;
string Merge_Two(string s, string m, int n, int q){
    string result="";
    int i=0;
    int j=0;
    while(i<n && j<q){
        result+=s[i];
        result+=m[j];
        i++;
        j++;
    }
    while(i<n){
        result+=(s[i]);
        i++;
    }
    while(j<q){
        result+=(m[j]);
        j++;
    }
    return result;
}
int main(){
    string s = "aceg";
    string m= "bdfh";
    int n= s.length();
    int q=m.length();
    cout<< Merge_Two(s,m,n,q);
    return 0;
}