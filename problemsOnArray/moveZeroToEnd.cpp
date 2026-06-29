#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //this one will not be able to maintain the order
        void brute(vector<int> &arr)
        {
            int n = arr.size();
            int i = 0;
            int j = n - 1;
            while (i < j)
            {
                if (arr[j] != 0)
                {
                    if (arr[i] == 0 && arr[j] != 0)
                    {
                        swap(arr[i], arr[j]);
                        i++;
                        j--;
                    }
                    // else if (arr[i] != 0 &&)
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
        // this one will not be able to solve the problem when two the array will have two adjacent zeros
        // void tried(vector<int> &arr){
        //     int n = arr.size();
        //     for (int i = 1; i<n; i++){
        //         // if (arr[i-1]<arr[i]){
        //         if (arr[i-1]==0 && arr[i]!=0){
        //         swap(arr[i-1],arr[i]);
        //         }
        //         else if (arr[i-1] == 0 && arr[i] == 0){

        //         }
        //     }
        // }

        void myWayOptimal(vector<int> &arr){
            int i =1;
            int j =0;
            int n = arr.size();
            while (j<i && i<n){
                if (arr[j] == 0 && arr[i] != 0){
                    swap(arr[i],arr[j]);
                    i++;
                    j++;
                }
                else if (arr[j] == 0 && arr[i] == 0){
                    i++;
                }
                else {
                    i++;
                    j++;
                }
            }
        }

        void optimal(vector<int> &arr){
            int j = -1;
            int n = arr.size();
            for (int i = 0 ; i < n; i++){
                if (arr[i] == 0){
                    j = i;
                    break;
                }
            }

            for (int i = j+1; i<n; i++){
                if (arr[i]!=0){
                    swap(arr[i],arr[j]);
                    j++;
                }
            }
        }

};

int main() 
{

    Solution s1;
    vector<int> arr = {1, 2, 3, 0, 0,0,0,0,5, 6, 0};
    int n = arr.size();
    s1.optimal(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}