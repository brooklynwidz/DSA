#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int divisor(int x){
            for (int i = 1; i<=x; i++){
                if (x%i==0){
                    cout << i << " ";
                }
            }
            return 0;
        }
};

int main(){
    Solution s1;
    s1.divisor(36);
}