// Count BST with N keys
#include <iostream>
#include <limits.h>
using namespace std;

int countBSTs(int n)
{
	int dp[n+1];

	dp[0] = 1;

	for(int i=1; i<=n; i++)
	{
		dp[i] = 0;

		for(int j=0; j<i; j++)
		{
			dp[i] += dp[j] * dp[i-j-1];
		}
	}

	return dp[n];
}


int main() {
    
    	int n = 384;

    	cout<<countBSTs(n);
    	
    	return 0;
}

// This Porblem is Application of Catalan Number 