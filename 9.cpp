/* 
	Author: Nishant                   
	Date: 19/03/2024
*
*
*/
 
// make sure  to  pass everything by reference 

//thank you ;;;;;;;


class Solution {
public:	
		
		int	dp(string &s,int &k,vector<vector<int>> &memo,int &n,int index,int prev){
	
	  		if(index >= n) return 0;
				if(memo[index][prev] != -1) return memo[index][prev];
			
				int include=0;
				if(prev == 0 || abs(s[index] - prev) <= k) include = 1 + dp(s,k,memo,n,index+1,s[index]);
				int notinclude=dp(s,k,memo,n,index+1,prev);
				return memo[index][prev]=max(include,notinclude);
	
		}
    int longestIdealString(string s, int k) {
			int n=s.length();
			vector<vector<int>> memo(n,vector<int>(150,-1));
			return dp(s,k,memo,n,0,0);  
    }
};     