#include<bits/stdc++.h>
using namespace std;
void freqcharacter(string s, int n){
    unordered_map<char,int> freq;
    for(char ch:s){
        freq[ch]++;
    }
    for(auto it:freq){
        cout<< it.first << " " << it.second << endl;
    }
}
int main(){
    string s="banana";
    int n=s.length();
    freqcharacter(s,n);
    return 0;
}