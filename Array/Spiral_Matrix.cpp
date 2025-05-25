#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&result){
    for(int i=0;i<result.size();i++){
        cout<< result[i] << " ";
    }
}
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if(matrix.size()==0){
        return {};
    }
    int n=matrix.size();
    int m=matrix[0].size();
    int top=0;
    int left=0;
    int right=m-1;
    int down=n-1;
    vector<int> result;
    int dir=0;
    while(top<=down && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
        }
        if(dir==1){
            for(int i=top;i<=down;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
        }
        if(dir==2){
            for(int i=right;i>=left;i--){
                result.push_back(matrix[down][i]);
            }
            down--;
        }
        if(dir==3){
            for(int i=down;i>=top;i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        dir=(dir+1)%4;
    }
    return result;
}
int main(){
    vector<vector<int>>matrix= {{1,2,3},{4,5,6},{7,8,9}};
    int n=matrix.size();
    int m=matrix[0].size();        
    vector<int>result=spiralOrder(matrix);
    printArray(result);
    return 0;
}
