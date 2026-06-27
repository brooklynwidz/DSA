#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        void oneLeftRotation(vector<int> &arr, int n){
            int temp = arr[0];
            // method 1
            for (int i = 0; i<n; i++){
                if (i == n-1){
                    arr[i] = temp;
                }
                else {
                    arr[i] = arr[i+1];
                }
            }

            //method 2

            // for (int i = 1; i<n-1; i++){
            //     arr[i-1] = arr[i];
            // }
            // arr[n-1] = temp;
        }


        void DLeftRotation(vector<int> &arr, int n){  //brute method
            int operation;
            cin >> operation;
            while (operation--){
                int temp = arr[0];
                for(int i = 1; i<n; i++){
                    arr[i-1] = arr[i];
                }
                arr[n-1] = temp;
                // k++;
            }
        }

        void optDLeftRotation(vector<int> &arr, int n, int d){
            d%=n;
            reverse(arr.begin(),arr.begin() + d);
            reverse(arr.begin() + d, arr.begin() + n);
            reverse(arr.begin(),arr.begin() + n);
        }
};


int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();;
    
    Solution s1;
    s1.optDLeftRotation(arr, n,3);

    for (int i = 0; i<n; i++){
        cout << arr[i] <<endl;
    }
}