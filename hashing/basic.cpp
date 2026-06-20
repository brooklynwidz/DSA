#include <iostream>
using namespace std;


int f(int num, int arr[], int n){
    int count = 0;
    for (int i = 0; i<n; i++){
        if(num == arr[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[5] = {1,2,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << f(2,arr,size);
}