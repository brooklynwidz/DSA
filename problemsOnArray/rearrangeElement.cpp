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


        //type 2 if pos and neg size is not equal

        void sol(vector<int> &arr){
            vector<int> pos, neg;
            for (int i = 0; i<arr.size(); i++){
                if (arr[i]<0){
                    neg.push_back(arr[i]);
                }
                else{
                    pos.push_back(arr[i]);
                }
            }

            if (pos.size()>neg.size()){
                for (int i = 0; i<neg.size(); i++){
                    arr[2*i] = pos[i];
                    arr[2*i+1] = neg[i];
                }
                int index = neg.size();
                for (int i = 2*neg.size();i<arr.size(); i++){
                    arr[i] = pos[index];
                    index++;
                }
            }
            else {
                for (int i = 0; i<pos.size(); i++){
                    arr[2*i] = pos[i];
                    arr[2*i+1] = neg[i];
                }
                int index = pos.size();
                for (int i = 2*pos.size(); i<arr.size(); i++){
                    arr[i] = neg[index];
                    index++;
                }
            }
        }
};


int main(){
    Solution s1;
    vector<int> arr = {3,2,1,-3,-6,-9,2,43,21,4,12};
    // s1.brute(arr);

    // vector<int> ans = s1.optimal(arr);

    // for (int i = 0; i<ans.size(); i++){
    //     cout << ans[i] << " ";
    // }

    // for (int i = 0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }

    Solution s2;

    s2.sol(arr);
    for (int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

}


