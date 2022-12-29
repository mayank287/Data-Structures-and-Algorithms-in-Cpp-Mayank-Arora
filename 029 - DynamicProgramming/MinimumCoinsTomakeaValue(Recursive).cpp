// Min Coins To Make the Value 
// Recursive Solution 
#include <bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int n, int value)
{
    if(value == 0) return 0;
    int res = INT_MAX;
    
    for(int i = 0; i < n; i++)
    {
        if(coins[i] <= value)
        {
            int sub_res = minCoins(coins,n,value - coins[i]);
            if(sub_res != INT_MAX) 
             res = min(res,sub_res + 1);
             
            
        }
    }
    
    return res;
}

int main() {
    int coins[] = {25,10,5};
    int n = sizeof(coins)/sizeof(coins[0]);
    
    cout << minCoins(coins,n,30);
    


    return 0;
}