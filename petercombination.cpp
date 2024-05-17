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
	}                          
	
	//creating all the subset and checking all the combination
	//[10 20 30] -->  -10 -20 +30 --> 0%360==0 --> means we are at the o degree at the end
	bool flag=false;
	for(int num=0; num<(1<<n)-1; num++){
		int sum=0;
		for(int bit=0; bit<=n-1; bit++){
			if(num&(1<<bit)) sum+=v[bit];
			else sum-=v[bit];
		}
		if(sum%360 == 0){
	  	flag=true;
			break;
		}
	}
	if(flag) cout << "YES"  << endl;
	else cout << "NO" << endl;
                                    
	return 0;
}