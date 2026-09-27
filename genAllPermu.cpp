#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        void solve(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, vector<int> &vis){
            
            
            if (ds.size() == arr.size()){
                ans.push_back(ds);
                return;
            }

            for (int i = 0; i<arr.size(); i++){
                if (vis[i]) continue;

                vis[i] = 1;
                ds.push_back(arr[i]);
                solve(arr,ans,ds,vis);

                ds.pop_back();
                vis[i] = 0;
            }
        }

        vector<vector<int>> permu(vector<int> &arr){
            sort(arr.begin(), arr.end());
            vector<vector<int>> ans;
            vector<int> ds;
            vector<int> vis(arr.size(), 0);
            solve(arr,ans,ds,vis);
            return ans;    
        }
};

int main(){
    Solution s1;
    vector<int> arr = {3,1,2};
    vector<vector<int>> ans = s1.permu(arr);
    int n = ans.size();
    for(int i = 0; i<n; i++){
        for (int j = 0; j<1; j++){
            cout << "[" << ans[i][j] << " ," << ans[i][j+1] << "," << ans[i][j+2] << "] \n";
        }
    }
}