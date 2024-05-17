/* 
	Author: Nishant
	Date: 19/03/2024
*
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	int grid[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 2, 2, 2, 2, 2, 2 ,2, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 2, 2, 2, 2, 2 ,2, 2, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};
	while(t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		int ans = 0;
		for(int i = 0; i < 10; ++i){
			string s;
			cin >> s;        
			for(int j = 0; j < 10; ++j){
				if(s[j] == 'X') ans += grid[i][j];
			}
		}
		cout << ans << endl;
	}
	return 0;

}