#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int brute(vector<int> &arr){
            int cnt = 0;
            int n = arr.size();
            for (int i = 0; i<n; i++){
                int num = arr[i];
                for (int j = 0; j < n; j++){
                    if (arr[j] == num){
                        cnt++;
                    }
                } 
                if (cnt == 1){
                    return num;
                }
                else {
                    cnt = 0;
                }
            }
            return 0;
        }

        int better(vector<int> &arr){ //TC = O(nlogm + m) => O(nlogm) SC = O(m)
            int n = arr.size();
            //here i will not use array instead i will use map so that time complexity as well as space compleaxity decreases
            map<int,int> mp ;
            for (int i = 0; i < n; i++){
                mp[arr[i]]++;
            }

            for (auto it: mp){
                if (it.second == 1){
                    return it.first;
                }
            }
            return 0;
        }

        int better1(vector<int> &arr){ // TC = O(m+n) => O(n)   SC = O(m)
            int n = arr.size();
            unordered_map<int,int> mp;
            for (int i = 0; i<n; i++){
                mp[arr[i]]++;
            }

            for (auto it: mp){
                if (it.second == 1){
                    return it.first;
                }
            }
            return 0;
        }

        
        int optimal(vector<int> &arr){ //TC = O(n) SC = O(1)
            int XOR = 0;
            int  n = arr.size();
            for (int i = 0; i < n; i++){
                XOR = XOR^arr[i];
            }
            return XOR;


        }


};

int main(){
    Solution s1;
    vector<int> arr = {1,1,2,3,3,4,4};
    cout << s1.better1(arr);
}