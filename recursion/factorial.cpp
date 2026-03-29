#include<bits/stdc++.h>
using namespace std;

int fact(int i, int val=1){
    if(i==1){
        return val;
    }
    return fact(i-1,val*i);

}

int factm2(int n){
    if (n ==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    cout << fact(5)<< "\n";
    cout << factm2(10);
}

//fact of 5
//5*4*3*2*1

//5