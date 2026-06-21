#include <bits/stdc++.h>
using namespace std;

int main(){
    int temp;
    vector<int> vec = {23,54,1,32,11,2};
    int n = vec.size();
    for (int i=0; i<=n-2; i++){
        int min = i;
        for (int j = i; j<=n-1; j++){
            if(vec[j]<vec[min]){
                temp = vec[min];
                vec[min] = vec[j];
                vec[j] = temp; 
            }   
        }
    }

    for(int i = 0; i<n;i++){
        cout << vec[i]<< endl;
    }
}