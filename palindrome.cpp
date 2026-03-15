#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long rev = 0;
        if (x == 0){
            return true;
        }
        if (x<0){
            return false;
        }

        while(x>0){
            int last = x%10;
            rev = (rev*10)+last;
            x/=10;
        }

        if (original == rev){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){
    Solution s1;
    bool ans = s1.isPalindrome(12231);
    cout << ans;
}