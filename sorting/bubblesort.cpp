#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp;
    vector<int> arr = {12,34,21,1,34,43,13};
    int n = arr.size();
    for(int i =0; i<=n-1;i++){
        for (int j =0; j<=n-2; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        n--;
    }


    for(int i =0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }
}