#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    //condition if the array is sorted then only this will work other wise this will not work
        int mysol(vector<int> &arr){
            sort(arr.begin(), arr.end());
            int n = arr.size();
            for (int i = 0; i < n; i++){
                if (arr[i+1] == arr[i]+1){}
                else {
                    return arr[i]+1;
                }
            }
        }

        int brute(vector<int> &arr, int N){
            int n = arr.size();
            for (int i = 1; i <= N; i++){
                int flag = 0;
                for (int j = 0; j < n; j++){
                    if (arr[j] == i){
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) return i;
            }
        }
        
        //hashing   TC->O(2N)
        int better(vector<int> &arr, int N){
            int n = arr.size();
            int hash[N+1] = {0};
            for (int i = 0; i < n; i++){
                hash[arr[i]] = 1;
            }

            for (int i = 1; i < n+1; i++){
                if (hash[i] == 0){
                    return i;
                }
            }
        }

        int optimal1(vector<int> &arr, int N){
            int sum = N*(N+1)/2; //15
            int s1 = 0;
            int n = arr.size();
            for (int i = 0; i<n; i++){
                s1+=arr[i];
            }
            /*
            0+1+2+3+4+5 = 15
            1+2+4+5 = 12
            15-12 = 3           
            */
            return sum-s1;
        }

        int optimal2(vector<int> &arr, int N){
            int XOR1 = 0; //1^2^3^4^5
            int XOR2 = 0; //1^2^5^4
            int n = arr.size();
            for (int i = 0; i<n; i++){
                XOR1 = XOR1^i+1;
                XOR2 = XOR2^arr[i];
            }
            XOR1^=N;
            return XOR1^XOR2;
        }
};


int main(){
    vector<int> arr = {1,2,5,4};
    Solution s1;
    int N = 5;
    cout << s1.optimal2(arr, N);
}