#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,4};
    int k =5;
    int j = 0;
    int next = 1; 
    while (k)
    {
        if (nums[j] + k > nums[next])
        {
                for(int i = 0; i<(nums[j]+5-nums[next]);i++){
                    if (nums[j] != nums[next])
                    {
                        nums[j]++;
                        k--;
                        next++;
                    }
                }
        }
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    int max = 0;
    for (int i = 0; i < mp.size(); i++)
    {
        if (nums[i] < nums[i + 1])
        {
            max = nums[i + 1];
        }
        else
        {
            max = nums[i];
        }
    }
}