// InterSection of 2 Sorted Array
// Time Complexity theta(m + n)
// This Solution Works on GFG By Calling Sort Function But Might Not Work Because Sort Function 
// Time Complexity o(nlogn) and This Solution Requires Theta(m + n)
#include <iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while(i < m && j < n)
    {
        
        if(i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
            
        }
         if(a[i] < b[j])
        {
            i++;
            
        }
        else if(a[i] > b[j])
        {
            j++;
        }
        else{
            cout << a[i]  << " ";
            i++;
            j++;
            
            }
            }
}





int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {3, 4, 5, 6, 7};
   
    intersection(a,b,7,6);
    

    return 0;
}
