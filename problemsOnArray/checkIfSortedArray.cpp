#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int checking(vector<int> &arr) {
            int sorted = 0;
            for (int i = 0; i<arr.size()-2; i++){
                if (arr[i]<=arr[i+1]){
                    
                }
                else {
                    return false;
                }


            }
            return true;
        }
};


int main(){

    Solution s1;
    vector<int> arr = {1,2,23,4,5,6};
    cout << s1.checking(arr);
}