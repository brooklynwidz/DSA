#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int brute(vector<int> &arr){
            int maxSum = INT_MIN;
            int n = arr.size();
            for (int i = 0; i < n; i++){
                for (int j = i; j < n; j++){
                    int sum = 0;
                    for (int k = i; k < j; k++){
                        sum+=arr[k];
                    }
                    maxSum = max(sum, maxSum);
                }
            }
            return maxSum;
        } 
          
        int better(vector<int> &arr){
            int maxSum = INT_MIN;
            int n = arr.size();

            for (int i = 0; i < n; i++){
                int sum = 0;
                for (int j = i; j < n; j++){
                    sum+=arr[i];
                    maxSum = max(sum,maxSum);
                }
            }
        } 
        
        //kadanes algorithm
        int optimal(vector<int> &arr){
            int maxi = INT_MIN;
            int sum = 0;
            int n = arr.size();
            for (int i = 0; i < n; i++){
                sum+=arr[i];
                if (sum < 0) {
                    sum = 0;
                }
                else{
                    maxi = max(sum,maxi);
                }
            }
            return maxi;
        }
};


int main(){
    vector<int> arr = {-2,2,3,-4,-5,1,2,3,6,-88};
    Solution s1;
    cout <<s1.optimal(arr) << "\n";
}