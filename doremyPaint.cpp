/* 
	Author: Nishant
	Date: 19/03/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin >> tt;   
	while(tt--){
		int n;	
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		unordered_map<int,int> u;
		for(int i=0; i<n; i++){
			u[v[i]]++;
		}
		if(u.size() > 2){	
	  	cout << "NO" << endl;
			continue;
		}
		if(u.size() == 1){
	  	cout << "Yes" << endl;
			continue;
		}
		int cnt1=0,cnt2=0;
		for(auto it=u.begin(); it != u.end(); it++){
	  	if(!cnt1) cnt1=it->second;	
			else cnt2=it->second;	
		}
	
		if(cnt1 == cnt2 || abs(cnt1-cnt2) == 1) cout << "Yes" << endl;
		else cout << "No" << endl;	
	}         	
	return 0;
}