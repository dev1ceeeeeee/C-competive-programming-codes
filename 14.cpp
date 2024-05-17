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
		int diff=a-b;
		if(diff>0){
			a=diff;
			b=0;
		}  
		else if(diff<0){
	  	b=-diff;
			a=0;
		}                                                         
		else{                                                   
	  	a=0;
			b=0;
		}
		if(c&1) a++;
		else b++;
		if(a>b) cout << "First" << endl;
		else cout << "Second" << endl;
 		
	}

	return 0;
}