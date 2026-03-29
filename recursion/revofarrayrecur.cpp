#include <bits/stdc++.h>
using namespace std;

void f(int i,int a[],int n){
    if (i>=n){
        return;
    }
    swap(a[i],a[n]);
    f(i+1,a,n-1);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){cin >> arr[i];}
    f(0,arr,n-1);

    for (int i= 0;i<n;i++){
        cout << arr[i]<< "\n";
    }
}