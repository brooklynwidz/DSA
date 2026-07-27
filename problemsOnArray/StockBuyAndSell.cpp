#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> &arr){
    int mini = arr[0];
    int profit = 0;
    int n = arr.size();
    for (int i = 0; i<n; i++){
        int cost = arr[i] - mini;
        profit = max(cost,profit);
        mini = min(arr[i], mini);
    }
    return profit;
}

int main(){
    vector<int> arr = {6,5,4,7,8,1};
    cout << sol(arr);
}