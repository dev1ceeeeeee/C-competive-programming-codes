/* 
	Author: Nishant
	Date: 19/03/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

//Jai ho Tourist bhaiyya ki

int main(){	
	
	int tt;
	cin >> tt;
	while(tt--){
		int n, m;
		cin >> n >> m;	                                                       
		string x,s;
		cin >> x;
		cin >> s;
		if(n >= m){
			if(x.find(s) != string::npos){
			  cout << 0 << endl;
				continue;
			} 
		}
		
		int ans=0;
		while(n<m){
	  	n*=2;
			ans++;
			x+=x;
		}
		if(n>=m){
		  if(x.find(s) == string::npos){	
		  	x+=x;
				ans++;
				if(x.find(s) != string::npos) cout << ans << endl;	
				else cout << -1 << endl;
			}
			else cout << ans << endl;
			} 					
	}
	return 0;
}