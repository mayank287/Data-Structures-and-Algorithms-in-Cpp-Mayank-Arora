// Longest Subarray With Equal Number of 0's and 1's (Naive)
// Time Complexity O(n2)
#include <iostream>
#include <vector> 
using namespace std;


int longestBinarySubArray(vector<int>& arr)
{
    int res = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        int c0 = 0, c1 = 0;
        for(int j = i; j < arr.size(); j++)
        {
            if(arr[j] == 0) c0++;
            else c1++;
            
            if(c0 == c1) res = max(res, j - i + 1);
            
        }
    }
    
    return res;
}


int main()
{
    vector<int> arr = {0,1,0};
    cout << longestBinarySubArray(arr);
    

    return 0;
}
