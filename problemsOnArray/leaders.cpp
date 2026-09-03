#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> brute(vector<int> &arr){
            int n = arr.size();
            bool leader;
            vector<int> ans;
            for (int i = 0; i<n; i++){
                leader = true;
                for (int j = i+1; j<n; j++){
                    if (arr[j] > arr[i]){
                        leader = false;
                        break;
                    }
                }

                if (leader == true){
                    ans.push_back(arr[i]);
                }
            }

            return ans;
        }
};

int main(){
    Solution s1;
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> ans = s1.brute(arr);
    sort(ans.begin(), ans.end());
    for (int i = 0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }
}