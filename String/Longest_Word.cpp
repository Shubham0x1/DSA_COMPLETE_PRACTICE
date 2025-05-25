#include<bits/stdc++.h>
using namespace std;
int maxlenword(string &sentence, int n){
    int maxlength=0;
    string longest="";
    string current="";
    for(char ch: sentence){
        if(ch!=' '){
            current+=ch; //to store one full word  we are appending here.
        }
        else{
            if(current.length()>maxlength){
                maxlength= current.length();
                longest=current;
            }
            current="";
        }
    }
    //check the last word.
    if(current.length()>maxlength){
        maxlength=current.length();
        longest=current;
    }
    return maxlength;
}
int main(){
    string sentence= "I am Shubham Gusain";
    cout<< maxlenword(sentence, sentence.length());
    return 0;
}
