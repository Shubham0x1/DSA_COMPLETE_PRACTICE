#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<< "Valid Anagram";
    }
    else{
        cout<< "Not a Valid Anagram";
    }
    return 0;
}