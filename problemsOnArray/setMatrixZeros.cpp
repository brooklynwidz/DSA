#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void markrow(vector<vector<int>> &arr, int row){
        int n = arr[0].size();
        for(int i = 0; i<n; i++){
            if (arr[row][i] != 0)
            arr[row][i] = -1;

        }
    }

    void markcol(vector<vector<int>> &arr, int col){
        int m = arr.size();
        for (int i = 0; i<m; i++){
            if (arr[i][col] != 0)
            arr[i][col] = -1;
        }
    }

    void brute(vector<vector<int>> &arr){
        int n = arr.size();
        int m = arr[0].size();
        for (int i = 0; i<n; i++){
            for (int j = 0; j < m; j++){
                if (arr[i][j] == 0){
                    markrow(arr,i);
                    markcol(arr,j);
                }
            }
        }

        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                if (arr[i][j] == -1){
                    arr[i][j] = 0;
                }
            }
        }

    }
};


int main(){
    Solution s1;
    vector<vector<int>> arr = {{1,1,1}, {1,0,0},{1,0,1}};
    s1.brute(arr);
    
        for (int i = 0; i<arr.size(); i++){
            for (int j = 0; j<arr[0].size(); j++){
                cout<< arr[i][j] << "\n";            
            }
        }
}