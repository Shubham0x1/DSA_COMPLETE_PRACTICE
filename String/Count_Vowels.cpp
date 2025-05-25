#include<bits/stdc++.h>
using namespace std;
int countVowels(string s, int n){
    int count=0;
    for(char ch:s){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    string s="adkdjkniio";
    int n= s.length();
    cout<< countVowels(s,n);
    return 0;
}