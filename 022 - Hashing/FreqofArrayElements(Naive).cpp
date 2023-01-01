// Frequenncy of Array Elememts (Naive)
// Time Complexity O(n2) and Aux Space O(1)
#include <iostream>
using namespace std;

void printFreq(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        
        if(flag == true) continue;
        int freq = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j]) freq++;
            
        }
        
        cout << arr[i] << " " << freq << endl;
        
    }
}



int main()
{
   int arr[] = {10,20,10,40,20,60};
   printFreq(arr,6);

    return 0;
}
