#include <bits/stdc++.h>

// #include <string
using namespace std;
class Solution {

public:
    int reverse(int x) {
        string rev = "";
        if (x>0){
            while (x>0){
                int last = x%10;
                rev= rev + to_string(last);
                x/=10;
            }
            return stoi(rev);
        }
        else if(x==0){
            return 0;
        }
        else {
            x= x*(-1);
            while (x>0){
                int last = x%10;
                rev= rev + to_string(last);
                x/=10;
            }
            return -stoi(rev);
        }
    }   
};


int main(){
    Solution s1;
    int rev = s1.reverse(1231);
    cout << rev;
}