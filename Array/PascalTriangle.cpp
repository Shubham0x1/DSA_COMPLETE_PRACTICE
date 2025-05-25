#include<bits/stdc++.h>
using namespace  std;
// vector<vector<int>>generatePascalTriangle(int numRows){
//     vector<vector<int>>triangle(numRows);
//     for(int i=0;i<numRows;i++){
//         triangle[i].resize(i+1);
//         triangle[i][0]=triangle[i][i]=1;
//         for(int j=1;j<i;j++){
//             triangle[i][j]= triangle[i-1][j-1]+triangle[i-1][j];
//         }
//     }
//     return triangle;
// }
// void printPascalTriangle(const vector<vector<int>>& triangle) {
//     for (const auto& row : triangle) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the number of rows for Pascal's Triangle: ";
//     cin >> n;

//     vector<vector<int>> pascal = generatePascalTriangle(n);
//     cout << "\nPascal's Triangle up to " << n << " rows:\n";
//     printPascalTriangle(pascal);

//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value=1;
//         for(int j=0;j<=i;j++){ //This is using binomial apprach. formula. value=value*(i-j)/j+1;
//             cout<< value << " ";
//             value= value*(i-j)/(j+1);
// //      }
//          cout<< "\n";
//         }
//     }
//       return 0;
// // }
int main(){
    int n;
    cin>>n;
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int top=i;
            int bottom=size-1-i;
            int right=size-1-j;
            int left=j;
            int minDist= min(min(top,bottom),min(left,right));
            cout<< (n-minDist);
        }
        cout<<"\n";
    }
}