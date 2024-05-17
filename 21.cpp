/* 
	Author: Nishant                   
	Date: 19/03/2024
*
*
*/

// Problem B -> Blank Space

#include<bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		vector<int> nums(n);
		for(int i=0;i<n;i++){
	 		cin >> nums[i];
		}

		vector<int> ans;
		int a=0;
		for(int i=0;i<n;i++){
	  	if(nums[i] == 0) a++;		
			else{
	    	ans.push_back(a);
				a=0;
			}
		}
		ans.push_back(a);
		sort(begin(ans),end(ans),greater<int>());
		cout << ans[0] << endl;
	}	

	return 0;
}