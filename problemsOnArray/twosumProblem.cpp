#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool brute(vector<int> &arr, int target){
            int n = arr.size();
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){ 
                    if (i == j) continue;
                    if (arr[i]+arr[j] == target){
                        return 1;
                    }
                }
            }
            return 0;
        }

        bool better(vector<int> &arr, int target){
            int n = arr.size();
            map<int,int> mp;
            for (int i = 0; i<n; i++){
                int a = arr[i];
                int b = target - a;
                if (mp.find(b) != mp.end()){
                    return true;
                }
                mp[a] = i;
            }
            return false;
        }

        string optimal(vector<int> &arr, int target){
            int n = arr.size();
            int left = 0, right = n-1;
            sort(arr.begin(),arr.end());
            while (left<right){
                int sum = arr[left] + arr[right];
                if (sum == target) return "Yes";
                else if (sum < target) left++;
                else right--;
            }
            return "No";
        }
};

int main(){
    vector<int> arr = {1,2,4,6,8,4};
    Solution s1;
    cout << s1.optimal(arr, 14);
}