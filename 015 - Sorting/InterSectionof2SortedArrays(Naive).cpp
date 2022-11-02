// InterSection of 2 Arrays Naive
// Time Complexity O(n * m)
#include <iostream>
using namespace std;
void interSection(int arr1[], int arr2[], int m, int n)
{
    
    for(int i = 0; i < m; i++ )
    {
        if(i > 0 && arr1[i] == arr1[i - 1])
        continue;
        for(int j = 0; j < n; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
                
            }
        }
    }
    
    
}

int main()
{
    int arr1[] = {1,20,20,40,60,60};
    int arr2[] = {2,20,20,20,60};
    
    interSection(arr1,arr2,6,5);
    

    return 0;
}
