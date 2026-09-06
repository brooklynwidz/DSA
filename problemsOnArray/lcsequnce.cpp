#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool ls(vector<int> &arr, int target){
            int n = arr.size();
            for (int i = 0; i<n; i++){
                if (arr[i] == target){
                    return true;
                }
            }
            return false;
        }

        int brute(vector<int> &arr){
            int n = arr.size();
            int cnt = 0;
            int longest = 1;
            int x;
            for (int i = 0; i<n; i++){ 
                x = arr[i];
                cnt = 1;
                while (ls(arr,x+1) == true){
                    x = x+1;
                    cnt++;
                }
                
                if (longest < cnt){
                    longest = cnt;
                }
            }

            return longest;
        }

        int better(vector<int> &arr){
            int n = arr.size();
            sort(arr.begin(), arr.end());
            int cnt = 0;
            int longest = 0;
            int lastSmallest = INT_MIN;
            for (int i = 0; i<n; i++){
                if (arr[i]-1 == lastSmallest){
                    cnt+=1;
                    lastSmallest = arr[i] ;   
                }
                else if (arr[i] != lastSmallest){
                    cnt = 1;
                    lastSmallest=arr[i];
                }
                longest = max(longest,cnt);
                
            }

            return longest;


        }

        int optimal(vector<int> &arr){
            int n = arr.size();
            unordered_set<int> st;
            int cnt = 0;
            int longest = 0;
            for (int i =0; i<n; i++){
                st.insert(arr[i]);
            }
            
            for (auto it : st){
                if (st.find(it-1) == st.end()){
                    cnt = 1;
                    while(st.find(it+1) != st.end()){
                        it += 1;
                        cnt+=1;
                    }
                    longest = max(longest,cnt);
                }

            }

            return longest;

        }
};

int main(){
    Solution s1;
    // vector<int> arr = {1,5,4,3,2,135,21,43};
    vector<int> arr = {1,2,34,1,2,3,1,2,3,1,2,3,1,2,3,101,101,104,102,102,103,4,5,6};
    cout << s1.optimal(arr);


}