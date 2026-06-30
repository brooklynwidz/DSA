#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void brute(vector<int> &arr1, vector<int> &arr2, vector<int> &un){
            int i = 0;
            int j = 0;
            int n1 = arr1.size();
            int n2 = arr2.size();
            while (i<n1 && j<n2){
                if (arr1[i]<arr2[j]){
                    if (un.size() == 0 || un.back() != arr1[i]){
                        un.push_back(arr1[i]);
                    }
                    i++;
                }
                else {
                    if (un.size() == 0 || un.back()!=arr2[j]){
                        un.push_back(arr2[j]);
                    }
                    j++;
                }
            }

            while (i<n1) {
                if (un.size() == 0 || un.back() != arr1[i]){
                    un.push_back(arr1[i]);
                }
                i++;
            }

            while (j < n2){
                if (un.size() == 0 || un.back() != arr2[j]){
                    un.push_back(arr2[j]);
                }
                j++;
            }
        }

        vector<int> optimal(vector<int> a, vector<int> b){
            int i = 0;
            int j = 0;
            int n1 = a.size();
            int n2 = b.size();
            vector<int> unionArr;
            while (i < n1 && j < n2){
                if (a[i] < b[j]){
                    if (unionArr.size() == 0 || unionArr.back() != a[i]){
                        unionArr.push_back(a[i]);
                    }
                    i++;
                }
                else {
                    if (unionArr.size() == 0 || unionArr.back() != b[j]){
                        unionArr.push_back(b[j]);
                    }
                    j++;
                }
            }

            while (i < n1) {
                if (unionArr.size() == 0 || unionArr.back() != a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
            }

            while (j < n2){
                if (unionArr.size() == 0 || unionArr.back() != b[j]){
                    unionArr.push_back(b[j]);
                }
                j++;
            }

            return unionArr;
        }
};

int main(){
    Solution s1;
    vector<int> arr1 = {1,1,2,2,3,4,5,5};
    vector<int> arr2 = {1,2,3,4,5,5,6,6,7,8,9};
    vector<int> un;

    vector<int> arr = s1.myfunc(arr1,arr2);
    int n4 = arr.size();
    
    // int n3 = un.size();
    // for (int i = 0; i<n4; i++ ){
    //     cout << un[i] << "\n";
    // }

    for (int x : arr){
        cout << x << " \n";
    }
}