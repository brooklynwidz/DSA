#include <bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        int removeDup(vector<int> &arr){
            int i = 0;
            for (int j = 1; j<arr.size(); j++){
                if (arr[i] != arr[j]){
                    // arr.erase(arr.begin()+i);
                    arr[i+1] = arr[j];
                    i++;
                }
            }
            return i+1;
        }

};


int main(){
    Solution s1;

    vector<int> arr = {1,2,3,4,5,5,5,6,6,6,6};


    int uniq = s1.removeDup(arr);
    cout << uniq<< endl;

    for(int i = arr.size()-1; i>uniq-1; i--){
        // cout << arr[i]<<endl;
        arr.pop_back();
    }

    for (int i = 0; i<arr.size(); i++){
        cout << arr[i] <<endl;
    }

}