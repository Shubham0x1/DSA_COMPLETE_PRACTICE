// #include<bits/stdc++.h>
// using namespace std;
// void printNumber(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<< i << " ";
//     printNumber(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     printNumber(1,n);
//     return 0;
// } //Using two arguments .
// Using single N argument.
// #include<bits/stdc++.h>
// using namespace std;
// void printNumber(int n){
//     if(n==0){
//         return;
//     }
//     printNumber(n-1);
//     cout<< n << " ";
// }
// int main(){
//     int n;
//     cin>>n;
//     printNumber(n);
//     return 0;
// }
// For N to 1 just print N and recurse it afterwards N-1 times.
// Base Case if N==0 return.