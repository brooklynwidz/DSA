#include <bits/stdc++.h> 
#include <string>
using namespace std;
class Solution {

public:
    int reverse(int x) {
        int rev = 0;
        if (x<0){
            x*=(-1);
            while (x>0){
                int last = x%10;
                rev = (rev*10) + last;
                x/=10;   
            }
            return rev;
        }
        else if (x == 0){
            return 0;
        }
        else {
            while (x>0){
                int last = x%10;
                rev = (rev*10) + last;
                x/=10;   
        }
        }
    }   
    // or

    int reverse2(int x){
        int rev = 0;
        if (x == 0){
            return 0;
        }
        while (x!=0){
            int last = x%10;
            rev = (rev*10) + last;
            x/=10;
        }
        return rev;
    }


};


int main(){
    Solution s1;
    int rev= s1.reverse2(0);
    cout << rev;
}



