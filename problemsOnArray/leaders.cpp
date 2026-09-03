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
        //the optimal method is simple start from the back of the array make a maximum variable where you will stroe the maximum and then check for the element 
        vector<int> optimal(vector<int> &arr){
            int maxi = INT_MIN;
            int n = arr.size();
            vector<int> ans;
            for (int i = n-1; i>=0; i--){
                if (arr[i] > maxi){
                    maxi = arr[i];
                    ans.push_back(maxi);
                }
            } 

            return ans;
        }
};

int main(){
    Solution s1;
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> ans = s1.optimal(arr);
    sort(ans.begin(), ans.end());
    for (int i = 0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }
}