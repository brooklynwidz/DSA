#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		void brute(vector<int> &arr){
			int n = arr.size();
			vector<int> pos;
			vector<int> neg;
			for (int i = 0; i<n; i++){
				if (arr[i] < 0){
					neg.push_back(arr[i]);
				}
				else{
					pos.push_back(arr[i]);
				}
			}
			for (int i = 0; i<n/2; i++){
				arr[2*i] = pos[i];
				arr[2*i+1] = neg[i];
			}
		}
	
};

int main(){
	vector<int> arr = {3,1,-2,-5,2,-4};
	Solution s1;
	s1.brute(arr);
	int n = arr.size();
	for (int i = 0; i<n; i++){
		cout << arr[i] << "\n";
	}
}
