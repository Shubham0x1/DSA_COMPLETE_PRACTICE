#include<bits/stdc++.h>
using namespace std;
//Remove the duplicates from the string and print in same order.
//Brute approach using hashmap (unordered_set and array).

// string removedup(string s){
//     int n=s.length();
//     string result="";
//     unordered_set<char>seen;
//     for(char ch:s){
//         if(seen.find(ch)==seen.end()){
//             seen.insert(ch);
//             result+=ch;
//         }
//     }
//     return result;
// }
// int main(){
//     string s="abccb";
//     cout<< removedup(s);
// }

//Better approach we can frequency array of 256 character instead of set hashmap.

