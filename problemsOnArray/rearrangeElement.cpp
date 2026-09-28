#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void brute(vector<int> &arr){
            int n = arr.size();
            vector<int> pos;
            vector<int> neg;
            for (int i = 0; i < n; i++){
                if (arr[i]>=0){
                    pos.push_back(arr[i]);
                }
                else{
                    neg.push_back(arr[i]);
                }
            }
            // for (int i = 0; i < n/2; i++){
            //     cout << pos[i]<< "\n";
            // }
            // for (int i = 0; i < n/2; i++){
            //     cout << neg[i]<< "\n";
            // }
            for (int i = 0; i<n/2; i++){
                arr[2*i] = pos[i];
                arr[2*i+1] = neg[i];
            }
        }

        vector<int> optimal(vector<int> &arr){
            int n = arr.size();
            vector<int> ans(n,0);
            int posIndex = 0;
            int negIndex = 1;
            for (int i = 0; i<n; i++){
                if (arr[i]>=0){
                    ans[posIndex] = arr[i];
                    posIndex+=2;
                }
                else{
                    ans[negIndex] = arr[i];
                    negIndex+=2;
                }
            }
            return ans;
        }
};


int main(){
    Solution s1;
    vector<int> arr = {3,2,1,-3,-6,-9};
    s1.brute(arr);

    vector<int> ans = s1.optimal(arr);

    for (int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    // for (int i = 0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
}


