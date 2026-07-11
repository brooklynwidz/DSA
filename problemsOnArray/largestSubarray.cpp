#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int mySol(vector<int> &arr, int k){
            int n = arr.size();
            int sum = 0, length = 0, i = 0, j = 0;
            while (i < n){
                if (j >= n) {
                    i++;
                    j = i;
                    sum = 0;
                }
                if (i<n && j<n) {
                    sum = sum + arr[j];
                }
                if (sum == k ){
                    if ((j-i+1) > length){
                        length = j - i + 1;
                    }
                    sum=0;
                    i++;
                    j=i;
                }
                else if (sum > k){
                    i++;
                    j=i;
                    sum = 0;
                }
                else {
                    j++;
                }
            }

            if (length == 0){
                return 0;
            }
            else {
                return length;
            }
        }
};


int main(){
    Solution s1;
    // vector<int> arr = {10,5,2,7,1,9};
    vector<int> arr = {1,2,1,1,1};
    int k = 3;
    cout << s1.mySol(arr,k);
}