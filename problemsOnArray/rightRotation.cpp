#include <bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        void brute(vector<int> &arr, int n){
            for(int i = 0; i < n-1; i++ ){
                int temp = arr[i+1];
                arr[i+1] = arr[0];
                arr[0] = temp;
            }
            // arr[0] = temp;
        }

        void optimal(vector<int> &arr, int k){
            int n = arr.size();
            k%=n;
            reverse(arr.begin(), arr.end());
            reverse(arr.begin(), arr.begin()+k);
            reverse(arr.begin()+k, arr.end());
        }
};

int main( ){
    
    Solution s1;
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    s1.brute(arr,n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

}