#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int secLargestElement(vector<int> arr){
            sort(arr.begin(), arr.end());
            int largest = arr[arr.size()-1];
            int sLargest;

            for (int i = arr.size()-2; i>=0; i--){
                if (arr[i] != largest){
                    sLargest = arr[i];
                    break;
                }
            }

            return sLargest;
        }

        int BetterSol(vector<int> arr){
            int largest = arr[0];
            int n = arr.size();
            
            int sl = INT_MIN;
            
            for(int i = 0; i<n; i++){
                if (arr[i]>largest){
                    largest = arr[i];
                }
            }

            for (int i = 0; i<n; i++){
                if (arr[i]>sl && arr[i] != largest){
                    sl = arr[i];
                }
            }

            return sl;

        }

        int optimalSol(vector<int> arr){
            int largest = arr[0];
            int slargest = INT_MIN;
            for(int i = 0; i<arr.size(); i++){
                if (arr[i]>largest){
                    slargest = largest;
                    largest = arr[i];
                }
                else if (arr[i]<largest && arr[i]>slargest){
                    slargest = arr[i];
                }
            }
            return slargest;
        }
};


int main(){
    Solution s1,s2;

    vector<int> arr = {123,4,43,12,1,23,12,4};
    // cout << s1.secLargestElement(arr) << endl;
    cout << s2.optimalSol(arr) <<endl;
    
}