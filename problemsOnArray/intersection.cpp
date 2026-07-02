#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> mymethod(vector<int> a, vector<int> b){
            vector<int> interArr;
            int i = 0;
            int j = 0;
            int n1 = a.size();
            int n2 = b.size();
            if (n1>=n2){
                while (i < n1 && j < n2){
                    if (a[i] == b[j]){
                        interArr.push_back(a[i]);
                        i++;
                        j++;
                    }
                    else  if (interArr.size() == 0 && i == n1-1){
                        i = 0;
                        j++;
                    }
                    else if (i == n1-1){
                        j++;
                    }
                    else {
                        i++;
                    }
                }
            }
            else {
                while (i < n1 && j < n2){
                    if (b[j] == a[i]){
                        interArr.push_back(b[j]);
                        j++;
                        i++;
                    }
                    else if (interArr.size() == 0 && j == n2-1){
                        j = 0;
                        i++;
                    }
                    else if (j == n2-1){
                        i++;
                    }
                    else{
                        j++;
                    }
                }
            }
            return interArr;
        }
};


int main(){
    Solution s1;
    // vector<int> a = {1,2,2,3,3,4,5,6};
    vector<int> b = {2,3,100};
    vector<int> a = {1,2,50,100};
    // vector<int> b = {2,3,3,5,6,6,7};
    vector<int> arr = s1.mymethod(a,b);

    for (int x: arr){
        cout << x  << "\n";
    }
}