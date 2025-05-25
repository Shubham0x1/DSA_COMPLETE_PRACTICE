#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    vector<int>freq(26,0);
    for(char ch:str){
        freq[ch]++;
    }
    int max= INT_MIN;
    char maxelement=
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
        }
    }
}