#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i,string &s,int n){
    if (i>=n/2){
        return true;
    }
    if (s[i]!=s[n-i-1]){
        return false;
    }
    return palindrome(i+1,s,n);
}

int main(){
    string s = "MADAM";
    cout << palindrome(0,s,s.size());
}

// #include <bits/stdc++.h>
// using namespace std;

// bool palindrome(int i, string &s, int n){
//     if (i >= n/2){
//         return true;
//     }
//     if (s[i] != s[n - i - 1]){
//         return false;
//     }
//     return palindrome(i + 1, s, n);  // FIXED
// }

// int main(){
//     string s = "MADAM";
    
//     if (palindrome(0, s, s.length())){
//         cout << "Palindrome";
//     } else {
//         cout << "Not Palindrome";
//     }
// }