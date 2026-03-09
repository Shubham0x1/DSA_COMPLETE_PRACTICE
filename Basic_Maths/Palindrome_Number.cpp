// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(int n){ //To check if a number is palindrome or not.
//     string s=to_string(n);
//     int size=s.length();
//     int i=0;
//     int j=size-1;
//     while(i<=j){
//         if(s[i]==s[j]){
//             i++;
//             j--;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<< "Enter the number you want a palindrome is or not: ";
//     cin>> n;
//     cout << (isPalindrome(n)?"true":"false");
//     return 0;
// }

//Approach 2:
//Without using string conversion.
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x){
    if(x<0 || (x%10==0) && x!=0) return false; //num should not be negative.
    int reversedhalf=0;
    while(x>reversedhalf){
        reversedhalf=reversedhalf*10+x%10;
        x=x/10;
    }
    return x==reversedhalf || x==reversedhalf/10;
}
int main(){
    int n;
    cout<< "Enter the number you want a palindrome is or not: ";
    cin>> n;
    cout << (isPalindrome(n)?"true":"false");
    return 0;
}