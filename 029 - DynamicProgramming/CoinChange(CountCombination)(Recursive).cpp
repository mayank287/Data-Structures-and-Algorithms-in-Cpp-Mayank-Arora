// Count Change Combination (Recursive)
#include <iostream>
using namespace std;


int getCount(int arr[], int n, int sum)
{
    if(sum == 0) return 1;
    if(n == 0) return 0;
    
    int res = getCount(arr,n - 1,sum);
    if(arr[n - 1] <= sum)
    {
        res += getCount(arr,n,sum - arr[n - 1]);
    }
    
    return res;
    
}




int main() {
   int coins[] = {2,5,3,6};
   int n = sizeof(coins)/sizeof(coins[0]);
   int sum = 10;
   
   cout << getCount(coins,n,sum) << endl;

    return 0;
}

// O/P :- 5
