#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(low<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i = 0; i<=low+temp.size(); i++){
            arr[i] = temp[i-low];
        }
    }
}


void mS(vector<int> &arr, int low ,int high){
    if (low == high) return;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    vector<int> dash = {12,34,24,346,4573,314,23,62,32};
    mS(dash,0,dash.size());
}