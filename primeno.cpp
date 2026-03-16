#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool prime(int x){
            int count = 0;
            for (int i = 1; i*i<=x; i++){
                if (x%i == 0){
                    count++;
                    if ((x/i!=i)){
                        count++;
                    }
                }
            }
            if (count ==2){
                return true;    
            }
            else{
                return false;
            }
        }
};

int main(){
    Solution s1;
    cout << s1.prime(18);
}

//Time complexity is O(Sqrt(x));