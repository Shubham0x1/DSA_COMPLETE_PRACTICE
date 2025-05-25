#include<bits/stdc++.h>
using namespace std;
char Max_Freq_Character(string s, int n){
    unordered_map<char,int> freq;
    for(char ch:s){
        freq[ch]++;
    }
    int max1=0;
    char max_freq;
    for(auto it:freq){
        if(it.second>max1){
            max1=it.second;
            max_freq=it.first;
        }
    }
    return max_freq;
}
int main(){
    string s="banana";
    int n=s.length();
    char result= Max_Freq_Character(s,n);
    cout<< result;
    return 0;
}