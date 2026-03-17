#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int gcd(int a,int b){
            // int fact;
            vector<int> v1;
            vector<int> v2;
            vector<int> v3;
            
            for (int i = 1; i<=a;i++){
                if (a%i==0){
                    v1.emplace_back(i);
                }
            }
            for (int j = 1;j<=b;j++){
                if (b%j==0){
                    v2.emplace_back(j);
                }   
            }
            // return max(v1,v2);
            for (int x: v1){
                for (int y:v2){
                    if (x == y){
                        v3.emplace_back(x);
                    }
                }
            }
            sort(v3.begin(),v3.end());
            return v3[v3.size()-1];

        }
};

int main(){
    Solution s1;
    cout << s1.gcd(15,9);
}
