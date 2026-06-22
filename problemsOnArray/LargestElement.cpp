#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,2,43,13,124,41};
    int largest = arr[0];

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << largest;

}