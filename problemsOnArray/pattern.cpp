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
		
		vector<int> optimal(vector<int> &arr){
			int n = arr.size();
			int i1 = 0;
			int i2 = 1;
			vector<int> ans(n);
			for (int i = 0; i < n; i++){
				if (arr[i]>=0){
					ans[i1] = arr[i];
					i1+=2;
				}
				else {
					ans[i2] = arr[i];
					i2+=2;
				}

			}
			return ans;
		}
	
};

int main(){
	vector<int> arr = {3,1,-2,-5,2,-4};
	Solution s1;
	//s1.brute(arr);
	vector<int> ans = s1.optimal(arr);
	int n = ans.size();
	for (int i = 0; i<n; i++){
		cout << ans[i] << "\n";
	}
}
