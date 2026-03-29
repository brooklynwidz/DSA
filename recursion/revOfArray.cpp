#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int loop(int a[]){
            int start = 0;
            int end = 4;
            while (start<=end){
                swap(a[start],a[end]);
                start++;
                end--;
            }
        }

        int mtwo(int a[], int n){
            int rev[n];
            for (int i = 0;i<n;i++){
                rev[i] = a[n-i-1];
            }

            for(int i = 0; i<n;i++){
                cout <<rev[i]<< "\n";
            }
        }
};


int main(){
    Solution s1;
    int a[5] = {1,2,3,4,2};
    int l = sizeof(a)/4;
    cout << l<<"\n\n";
    s1.loop(a);
    // s1.mtwo(a,l);

    // for (int i = 0; i<5;i++){
    //     cout <<a[i]<<"\n";
    // }
}