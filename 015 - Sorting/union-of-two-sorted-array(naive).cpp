// Union of Two Sorted Array (Naive)
// Time Complexity O((m + n) * log(m + n))


#include <iostream>
#include<algorithm>
using namespace std;

void printUnion(int a[], int b[], int n, int m)
{
    int c[m + n];
    for(int i = 0; i < m; i++ )
    {
        c[i] = a[i];
        
    }
    
    for(int i = 0; i < n; i++)
    {
        c[m + i ] = b[i];
        
    }
    
    sort(c,c + m + n);
    for(int i = 0; i < m + n; i++)
    {
        if(i == 0 || c[i] != c[i - 1])
        {
            cout << c[i] << " "; 
        }
    }
    
}







int main()
{
    int a[] = {2,3,3,3,4,4};
    int b[] = {4,4};
    
    printUnion(a,b,6,2);
    

    return 0;
}

