#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& arr) {
        int n = arr.size();
        int maxIndex = 0, max;
        max = arr[0];
        for (int i = 0; i<n; i++){
            if (max < arr[i]){
                max = arr[i];
                maxIndex = i;
            }
        }

        for (int i = 0; i<n; i++){
            if (arr[i]!=max && max<2*arr[i]){
                return -1;
            }
        }
        return maxIndex;
    }
};