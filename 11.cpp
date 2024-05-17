/* 
	Author: Nishant
	Date: 20/03/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
		v[i]=abs(v[i]);
	}
	auto x=min_element(begin(v),end(v));
	int ans= *x;
	
	cout << ans << endl;
		
	return 0;
}