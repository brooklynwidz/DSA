#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool ls(vector<int> &arr, int target){
            int n = arr.size();
            for (int i = 0; i<n; i++){
                if (arr[i] == target){
                    return true;
                }
            }
            return false;
        }

        int brute(vector<int> &arr){
            int n = arr.size();
            int cnt = 0;
            int longest = 0;
            int x;
            for (int i = 0; i<n; i++){ 
                x = arr[i];
                cnt = 1;
                while (ls(arr,x+1) == true){
                    x = x+1;
                    cnt++;
                }
                
                if (longest < cnt){
                    longest = cnt;
                }
            }

            return longest;
        }
};

int main(){

    Solution s1;
    vector<int> arr = {1,5,4,3,2,135,21,43};
    cout << s1.brute(arr);

}