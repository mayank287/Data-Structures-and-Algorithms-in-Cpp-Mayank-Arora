// Longest Subarray With Given Sum (Naive)
// Time Complexity O(n2)
#include <iostream>
using namespace std;

int maxLength(int arr[], int n, int sum)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for(int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if(curr_sum == sum)
            {
                res = max(res,j - i + 1);
            }
        }
    }
    return res;
    
}


int main()
{
   int arr[] = {-1,2,2};
   cout << maxLength(arr,3,6);
   
    return 0;
}
