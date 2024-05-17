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
		int n,k;	
		cin >> n >> k;
		vector<int> v(n);
		for(int i=0; i<n; i++){
	  	cin >> v[i];	
		}
		bool flag=false;
		for(int i=0;i<n;i++){	
	  	if(v[i] == k){	
	    	flag=true;
				break;
			}
		}
		if(flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;	
}