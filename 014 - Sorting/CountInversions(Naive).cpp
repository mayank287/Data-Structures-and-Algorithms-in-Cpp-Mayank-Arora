// Count Inversions in Array 
// Time Complexity O(n2)

#include <iostream>
using namespace std;

int countInversions(int arr[], int n)
{
    
    int res = 0;
    for(int i = 0; i < (n - 1); i++)
    {
        for(int j = i + 1; j < n; j++ )
        {
            if(arr[i] > arr[j])
            {
                res++;
            }
        }
    }
    
    return res;
    
    
}




int main()
{
   int arr[] = {9,4,3,1};
   cout << countInversions(arr,4);
   
    

    return 0;
}
