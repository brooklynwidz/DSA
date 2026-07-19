#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
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
};

int main(){
    vector<int> arr = {1,2,4,6,8,4};
    Solution s1;
    cout << s1.better(arr, 14);
}