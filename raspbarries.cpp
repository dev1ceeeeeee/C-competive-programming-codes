/* 
	Author: Nishant                   
	Date: 09/05/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int tt;
	cin >> tt;                                                                                                                        
	while(tt--){
		int n,k;
		cin >> n;
		cin >> k;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];	  	
		}		
		int ans=INT_MAX;
		for(int i=0;i<n;i++){
	  	ans=min(ans,abs(k-arr[i]));
		}
		cout << ans << endl;
	}
	return 0;
}