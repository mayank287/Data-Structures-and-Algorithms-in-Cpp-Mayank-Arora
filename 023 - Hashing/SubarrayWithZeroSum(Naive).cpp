// SubArray With Zero Sum(Naive)
// Time Complexity O(n2)
#include <bits/stdc++.h> 
using namespace std; 


bool isSum(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for(int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if(curr_sum == 0) return true;
        }
       
    }
    return false;
}


 
int main() 
{ 
    int arr[] = {3,1,-2,5,6};
    if(isSum(arr,5))
    {
        cout << "yes" << endl;
    }
    else{
        cout << "No" << endl;
        
    }
  
    
    return 0; 
} 
