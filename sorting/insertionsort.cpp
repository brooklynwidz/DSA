#include <bits/stdc++.h>
using namespace std;

// int main(){

//     vector<int> arr = {12,34,21,1,14123,43,1354,123};
//     int n= arr.size();
//     for (int i = 0; i<=n-1; i++){
//         int j = i;
//         while((j>=0 && j<n-1 && arr[j]>arr[j+1])){
            
//             int temp = arr[j+1];
//             arr[j+1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }


//     for(int i = 0; i<n; i++){
//         cout << arr[i] << endl;
//     }
// }

// #2 incertion sort

int main(){
    vector<int> arr = {12,34,21,1,14123,43,1354,123};
    int n= arr.size();
    for (int i = 0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << endl;
    }
    
}