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
		int a, b, c;
		cin >> a >> b >> c;            
		if(c&1){
			a+=1;			
		}
		if(a>b) cout << "First" << endl;
		else cout << "Second"  << endl; 
	}

	return 0;
}