#include<bits/stdc++.h>
using namespace std;
int convertStringToPalindrome(string str){
    string reversed= str;
    reverse(reversed.begin(),reversed.end());
    string combined = str+ "#" +reversed;
    int n= combined.length();
    vector<int>lps(n,0);
    for(int i=1;i<n;i++){
        int j=lps[i-1];
        while(j>0 && combined[i]!= combined[j]){
            j=lps[j-1];
        }
        if(combined[i]==combined[j]){
            j++;
        }
        lps[i]=j;
    } 
    int longestPalindromeSuffixLength= lps[n-1];
    return str.length()- longestPalindromeSuffixLength;
}
int main(int argc, char* argu[]){
    if(argc>2){
        cout<< "Please provide a string input.\n";
        return 1;
    }
    string str=argu[1];
    cout<< convertStringToPalindrome(str) << endl;
    return 0;
}
