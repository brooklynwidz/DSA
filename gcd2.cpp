#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int gcd(int a,int b){
            int gcd = 1;
            for (int i = 1; i<=min(a,b);i++){
                if (a%i ==0 && b%i == 0){
                    gcd = i;
                }
            }
            return gcd;
        }

};

int main(){
    Solution s1;
    cout << s1.gcd(15,5);
}