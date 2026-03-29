#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void p1(int i, int n){
            if (i>n){
                return;
            }
            cout << i<< "\n";
            p1(i+1,n);
        }
        //print name n times

        void p2(int i, int n){
            if (i>n){
                return;
            }
            cout <<"dash"<<"\n";
            p2(i+1,n);
        }
};

int main(){
    Solution s1;
    int n;
    cin >> n;
    s1.p1(1,n);
    s1.p2(1,n);
}