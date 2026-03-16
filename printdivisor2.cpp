#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int divisor(int x){
            vector<int> v;
            // for (int i = 1; i<=sqrt(x); i++){
            for (int i = 1; i*i<=x; i++){
                if (x%i == 0){
                    v.emplace_back(i);
                    if ((x/i)!=i){
                        v.emplace_back(x/i);
                    }
                }
            }
            sort(v.begin(),v.end());
            for (int x : v){
                cout << x <<" ";
            }
        }       
};

int main(){
    Solution s1;
    s1.divisor(36);
}