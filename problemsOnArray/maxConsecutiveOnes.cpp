#include <bits/stdc++.h>
using namespace std;

class Solution {

    public:
    //wihtout using max function 
        int maxones(vector<int> &arr){
            int maximum = 0;
            int count = 0;
            int n = arr.size();
            for (int i = 0; i<n; i++){
                if (arr[i] == 1){
                    count++;
                    // max++;
                }
                else {
                    if (count > maximum){
                        maximum = count;
                    }
                    count = 0;
                }

                if (i==n-1 && count > maximum){
                    maximum = count;
                }
            }
            return maximum;
        }

        int method2(vector<int> &arr){
            int n = arr.size();
            int maxi = 0;
            int count = 0;
            for (int i = 0; i<n; i++){
                if (arr[i] == 1){
                    count++;
                    maxi = max(count, maxi);
                }
                else {
                    count  = 0;
                }

            }
            return maxi;
        }

};


int main(){
    Solution s1;
    vector<int> arr = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1};
    cout << s1.method2(arr);
}