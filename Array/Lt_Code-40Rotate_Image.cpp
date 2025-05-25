#include<bits/stdc++.h>
using namespace std;
void printArray(vector<vector<int>>&matrix,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< matrix[i] [j] << " ";
        }
    }
}
void rotate(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    //Transposing Matrix
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reversing the matrix row wise.
    for(int i=0;i<m;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    vector<vector<int>>matrix= {{1,2,3},{4,5,6},{7,8,9}};
    int m=matrix.size();
    int n=matrix[0].size();        
    rotate(matrix);
    printArray(matrix,m,n);
    return 0;
}