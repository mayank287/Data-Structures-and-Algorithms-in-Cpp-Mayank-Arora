// Find The Only Odd Occurring Number
// Time Complexity o(n2)
#include <iostream>

using namespace std;




void oddOcurring(int arr[], int n)
{
    

    
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            count++;
            
        }
        
        if(count % 2 != 0)
        {
            cout << arr[i] << endl;
            
        }
    }
    
}




int main()
{
  
  
  int arr[] = {4,3,4,4,4,5,5};
  int n = sizeof(arr)/sizeof(arr[0]);
    
    oddOcurring(arr,n);
    

    return 0;
}
// O/P :- 3