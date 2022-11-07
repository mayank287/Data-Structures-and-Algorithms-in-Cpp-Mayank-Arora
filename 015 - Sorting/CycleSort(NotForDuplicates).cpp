// Cycle Sort Not For Duplicates
#include <bits/stdc++.h>
using namespace std;

void cycleSortDistinct(int arr[], int n)
{
    
    for(int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for(int i = cs + 1; i < n; i++)
        {
            if(arr[i] < item) pos++;
        }
        swap(item,arr[pos]);
        
        while(pos != cs)
        {
            pos = cs;
            for(int i = cs + 1; i< n; i++)
            {
                if(arr[i] < item)  pos++;
               
                
            }
            swap(item,arr[pos]);
            
        }
    }
    
    
}


int main()
{
   int arr[] = {20,40,50,10,20};
   cycleSortDistinct(arr,5);
   for(int x : arr)
   {
       cout << x << " ";
       
   }

    return 0;
}
