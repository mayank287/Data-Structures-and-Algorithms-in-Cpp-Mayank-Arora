// Majority Element (Naive)
// Time Complexity o(n2)

#include <iostream>
using namespace std;


int findMajority(int arr[], int n)
{
 
    for(int i = 0; i < n; i++ )
    {
        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                
            }
            
        }
        if(count > n/2)
        {
            return arr[i];
            
        }
    }
    
    return -1;
    
}




int main()
{
    int arr[] = {8,7,6,8,6,6,6,6,8,9,9,9,9,9,9,9,9,9,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    cout << findMajority(arr,n);
    
    
    
    return 0;
    
}