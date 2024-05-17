/* 
	Author: Nishant
	Date: 13/03/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> v(n);
	int sum=0;
	for(int i=0; i<n; i++){            
		cin >> v[i];
		sum+=v[i];			                             
	}
	if(sum%360 == 0){
	  cout << "YES" << endl;
		return 0;
	} 
	sum=0;
	for(int i=0;i<n;i++){
		sum^=v[i];	
	}
	if(sum) cout << "NO" << endl;
	else cout << "YES" << endl;
                                    
	return 0;
}