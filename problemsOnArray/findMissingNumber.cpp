#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    //condition if the array is sorted then only this will work other wise this will not work
        int mysol(vector<int> &arr){
            int n = arr.size();
            for (int i = 0; i < n; i++){
                if (arr[i+1] == arr[i]+1){}
                else {
                    return arr[i]+1;
                }
            }
        }

        int brute(vector<int> &arr, int N){
            int n = arr.size();
            for (int i = 1; i <= N; i++){
                int flag = 0;
                for (int j = 0; j < n; j++){
                    if (arr[j] == i){
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) return i;
            }
        }
};


int main(){
    vector<int> arr = {1,2,5,4};
    Solution s1;
    cout << s1.brute(arr,5);
}