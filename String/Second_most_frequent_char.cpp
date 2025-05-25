#include<bits/stdc++.h>
using namespace std;
char Max_Freq_Character(string s, int n){
    unordered_map<char,int> freq;
    for(char ch:s){
        freq[ch]++;
    }
    int largest=0;
    int second_largest=0;
    char max_freq='\0';
    char second_freq='\0';
    for(auto it:freq){
        if(it.second>largest){
            second_largest=largest;
            second_freq= max_freq;
            largest=it.second;
            max_freq=it.first;
        }
        else if(it.second>largest && it.second!=largest){
            second_largest=it.second;
            second_freq= it.first;
        }
    }
    return second_freq;
}
int main(){
    string s="banana";
    int n=s.length();
    char result= Max_Freq_Character(s,n);
    cout<< result;
    return 0;
}