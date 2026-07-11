#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int mySol(vector<int> &arr, int k){
            int n = arr.size();
            int sum = 0, length = 0, i = 0, j = 0;
            while (i < n){
                if (j > n) {
                    i++;
                    j = i;
                }
                sum = sum + arr[j];
                if (sum >= k){
                    length = j - i + 1;
                    i++;
                    j=i;
                }

                j++;
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
    vector<int> arr = {10,5,2,7,1,9};
    int k = 15;
    cout << s1.mySol(arr,k);
}