#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int brute(vector<int> &arr){
            int n = arr.size();
            int x = n/2;
            for (int i = 0; i < n; i++){
                int count = 0;
                for (int j = 0; j < n; j++){
                    if (arr[j] == arr[i]){
                        count++;
                    }
                }
                if (count > x){
                    return arr[i];
                }
            }
            return -1;
        }

        int better(vector<int> &arr){
            map<int,int> mp;
            int n = arr.size();
            for (int i = 0; i<n; i++){
                mp[arr[i]]++;
            }

            for (auto it: mp){
                if (it.second > n/2){
                    return it.first;
                }
            }
            return -1;
        }
};

int main(){
    vector<int> arr = {2,2,1,2,3,2,2,3,3,3,3,3,3};
    Solution s1;
    cout << s1.better(arr);
}