#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int count = 0;
        void name(){
            if(count == 5){
                return;
            }
            cout << "dash"<< "\n";
            count++;
            name();
        }
        void printLiner(int n){
            if (count == n+1){
                return;
            }
            cout << count<< "\n";
            count++;
            printLiner(n);
        }
        void revprint(int n){
            if (n ==1){
                cout <<1<<"\n";
                return ;
            }
            cout << n<< "\n";
            n--;
            revprint(n);
        }
};


int main(){
    Solution s1;
    // s1.name();
    // s1.printLiner(10);
    s1.revprint(10);
}