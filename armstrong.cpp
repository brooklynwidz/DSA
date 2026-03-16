#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

        bool armstrong(int x){
            int o = x;
            int copy= x;
            int sum = 0;
            int count = 0;
            if (x == 0){
                return true;
            }
            while (x!=0){
                int last = x%10;
                count++;
                x/=10;
            }

            while (copy!=0){
                int last = copy%10;
                sum+=round(pow(last,count));
                copy/=10;
            }
            
            if (o == sum){
                return true;
            }
            else {
                return false;
            }
        }
};

int main(){
    Solution s1;
    cout << s1.armstrong(153);
}