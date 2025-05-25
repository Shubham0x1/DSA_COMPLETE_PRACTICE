#include<bits/stdc++.h>
using namespace std;
vector<int>count(string &s, int n){
    int vowels=0;
    int consonants=0;
    int spaces=0;
    for(int i=0;i<n;i++){
        char ch= tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }
        else if(isalpha(ch)){
            consonants++;
        }
        else if(isspace(ch)){
            spaces++;
        }
    }
    return{vowels,consonants,spaces};
}
int main(){
    string s="My name is Shubham";
    vector<int>result= count(s,s.length());
    cout << "Vowels: " << result[0] << endl;
    cout << "Consonants: " << result[1] << endl;
    cout << "Spaces: " << result[2] << endl;
    return 0;
}