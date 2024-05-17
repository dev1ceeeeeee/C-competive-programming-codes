#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;	
		vector<int> nums(n+1);
		for(int i=1;i<=n;i++){
			cin >> nums[i];
		}
		int two = count(nums.begin(),nums.end(),2);
		int ite=0,found=0;
		for(int i=1;i<n;i++){
	  	if(nums[i] == 2){
		  	--two;
				++ite;
			}
			if(two == ite){
				cout << i << endl;
				found = 1;
				break;
			}
		}
	  if(!found) cout << -1 << endl;
	}
	return 0;
}