#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n= str.length();
    int mid=n/2;
    cout<< "String before: " << str << endl;
    reverse(str.begin(), str.begin()+mid);
    cout<< "String after: " << str;
    return 0;
}