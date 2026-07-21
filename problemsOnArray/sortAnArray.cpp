#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> better(vector<int> arr){
            int cnt1 = 0, cnt2 = 0, cnt0 = 0;
            int n = arr.size();

            for (int i = 0; i<n; i++){
                if (arr[i] == 0) cnt0++;
                else if (arr[i] == 1) cnt1++;
                else cnt2++;
            }
            for (int i = 0; i<cnt0; i++){
                arr[i] = 0;
            }
            for(int i = cnt0; i<cnt0+cnt1; i++){
                arr[i] = 1;
            }
            for (int i = cnt0+cnt1; i<n; i++){
                arr[i] = 2;
            }

            return arr;
        }
};


int main(){
    vector<int> arr = {0,1,2,1,2,0,2,0,1};
    Solution s1;
    vector<int> res = s1.better(arr);
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << "\n";
    }
}