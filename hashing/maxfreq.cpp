#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums, int k){
    sort(nums.begin(), nums.end());
    int l =0, r = 0, res =0, total = 0;
    while (r<nums.size()){
        total+=nums[r];
        while ((long long) nums[r]*(r-l+1)>total+k){
            total-=nums[l];
            l+=1;
        }
        res = max(res,r-l+1);
        r+=1;
    }

    return res;
} 


int main(){

    vector<int> vec ={1,2,4,2,1};
    cout << "max freq: " << func(vec,5);
}