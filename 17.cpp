/* 
	Author: Nishant
	Date: 22/04/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tt;
	cin >> tt;
	while(tt--){
		int n,k,x;
		cin >> n >> k >> x;
		
		if(x != 1){
			cout << "YES" << endl;
			cout << n << endl;
			for(int i=0;i<n;i++) cout << 1 << " ";
			cout << endl;
		}else{
	 		if(k == 1) cout << "NO" << endl;
			else{
				if((n&1) == 0){
					cout << "YES" << endl;
					cout << n/2 << endl;
					for(int i=0;i<n/2;i++){
			    	cout << 2 << " ";   	
					}
					cout << endl;	
				}else{
					if(k>=3){
				  	cout << "YES" << endl;
						cout << n/2 << endl;
						for(int i=0;i<n/2-1;i++){
			    		cout << 2 << " ";   	
						}cout << 3 ;
						cout << endl;	
					}else cout << "NO" << endl;			
				}
			} 		
		}	                           
	}  
	return 0;
}