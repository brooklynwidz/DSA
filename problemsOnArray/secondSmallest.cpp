#include <bits/stdc++.h>
using namespace std;


class Solution {
    public: 
        int secondSmallest(vector<int> arr){
            int smallest = arr[0];
            int ssmallest = INT_MAX;
            for (int i = 0; i<arr.size(); i++){
                if (arr[i]<smallest){
                    ssmallest = smallest;
                    smallest = arr[i];
                }
                else if (arr[i]>smallest && arr[i]<ssmallest){
                    ssmallest = arr[i];
                }
            }
            return ssmallest;
        }
};

int main(){

    Solution s1;
    vector<int> arr = {12,4323,12,34,23,34,23,2,32};
    cout <<s1.secondSmallest(arr)<< endl;

}