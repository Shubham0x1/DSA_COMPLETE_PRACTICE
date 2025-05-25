#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Shubham Gusain";
    int count=0; //tolower gives char values not string, traverse over whole characters.
    for( char &ch: str){
        ch= tolower(ch);
    }
    for(char ch:str){
        if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u'){
            count++;
        }
    }
    cout<< "The number of vowels is: " << count;
}