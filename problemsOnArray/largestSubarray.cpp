// array should contain only positive integer


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

        int brute(vector<int> &arr, int k){
            int n = arr.size();
            int length = 0;
            for (int i = 0; i<n; i++){
                int sum = 0;
                for (int j = i; j<n; j++){
                    for (int x = i; x<=j; x++){
                        sum+=arr[x];
                    }
                    if (sum == k && length<j-i+1){
                        length = j-i+1;
                    }
                }
            }
            return length;
        }
};


int main(){
    Solution s1;
    // vector<int> arr = {10,5,2,7,1,9};
    vector<int> arr = {3,1,2,4,3};
    int k = 3;
    cout << s1.brute(arr,k);
}