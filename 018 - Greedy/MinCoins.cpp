// Min Coins 
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;


int minCoins(int coin[], int n, int amount)
{	
    	sort(coin, coin + n);

    	int res = 0;

    	for(int i = n - 1; i >= 0; i--)
    	{
    		if(coin[i] <= amount)
    		{
    			int c = floor(amount / coin[i]);

    			res = res + c;

    			amount = amount - c * coin[i];
    		}

    		if(amount == 0)
    			break;
    	}

    	return res;
}
    


int main() {
	
      int coin[] = {5, 10, 2, 1}, n = 4, amount = 57;
      
      cout<<minCoins(coin, n, amount);

    
}
// GFG Solution
class Solution{
public:
    vector<int> minPartition(int amount)
    { 
       vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
       int n = coin.size();
       
       vector<int> ans;
       
       for(int i = n - 1; i >= 0; i--)
       {
           if(coin[i] <= amount)
           {
               int c = floor(amount/coin[i]);
               amount = amount - c * coin[i];
               while(c--)
               {
                   
               ans.push_back(coin[i]);
               }
           }
           if(amount == 0)
           {
               break;
           }
       }

       return ans;
    }
};