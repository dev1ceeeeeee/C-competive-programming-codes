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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int i=0;
		int count=0; 
		bool flag=true;       
		while(i < n){
			if(s[i] == '.') count++;
			if(i>0 && i<n-1 && s[i] == '.' && s[i-1] == '.' && s[i+1] == '.'){
			  cout << 2 << endl;
				flag=false;
				break;
			}
			i++;	
		}
		if(flag) cout << count << endl;		
		}
	return 0;	
}