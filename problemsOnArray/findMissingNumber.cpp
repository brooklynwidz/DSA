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
};


int main(){
    vector<int> arr = {1,2,4,5};
    Solution s1;
    cout << s1.mysol(arr);
}