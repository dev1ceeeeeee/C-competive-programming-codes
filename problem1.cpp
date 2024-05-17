/* 
	Author: Nishant
	Date: 13/03/2024
*
*
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	int tt;
	cin >> tt;
	while(tt--){
		int n, x;
		cin >> n >> x;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin >> v[i];
		} 
		int diff=INT_MIN;
		for(int i=1;i<n;i++){
	  	diff=max(diff,v[i]-v[i-1]);	
		}                                    
		int ans=max(diff,2*(x-v[n-1]));
		ans=max(ans,v[0]);
		cout << ans << endl;	
	}	
	return 0;
}