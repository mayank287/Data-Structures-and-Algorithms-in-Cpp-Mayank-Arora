// Min Jumps To Reach at End 
// Recursive Solution 
#include <bits/stdc++.h>
using namespace std;

int minJumps(int coins[], int n)
{
    if(n == 1) return 0;
    int res = INT_MAX;
    
    for(int i = 0; i <= n - 2; i++)
    {
        if(i + coins[i] >= n - 1)
        {
            int sub_res = minJumps(coins,i + 1);
            if(sub_res != INT_MAX)
            res = min(res,sub_res + 1); 
        }
    }
    
    return res;
}

int main() {
   int jumps[] = {4,1,5,3,1,3,2,1,8};
   int n = sizeof(jumps)/sizeof(jumps[0]);
  cout << minJumps(jumps,n) << endl;

    return 0;
}