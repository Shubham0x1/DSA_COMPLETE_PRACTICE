#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>& prices,int n){
    for(int i=0;i<n;i++){
        cout<< prices[i] << " ";
    }
}
int maxProfit(vector<int>& prices,int n) {
    int mini=prices[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int cost= prices[i]-mini;
        profit=max(cost,profit);
        mini= min(mini,prices[i]);
    }
    return profit;
}
int main(){
    vector<int>prices= {5,4,2,9,1,5};
    int n=prices.size();
    cout<< maxProfit(prices,n);
    return 0;
}
 