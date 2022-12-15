// Longest Subarray With Same Sum in Two Binary Array (Naive)
// Time Complexity O(n2)
#include <iostream>
using namespace std;

int maxSum(bool arr1[], bool arr2[],int n )
{
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int sum1 = 0,sum2 = 0;
        for(int j = i; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];
            
            if(sum1 == sum2)
            {
                ans = max(ans,j - i + 1);
            }
        }
    }
    
    return ans;
    
}


int main()
{
    bool arr1[] =  {0,1,0,1,1,1,1};
    bool arr2[] = {1,1,1,1,1,0,1};
    
    cout << maxSum(arr1,arr2,7);
    

    return 0;
}
