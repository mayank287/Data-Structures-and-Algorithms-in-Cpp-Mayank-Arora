// Bucket Sort 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void bucketSort(int arr[], int n, int k)
{
    int max_value = arr[0];
    for(int i = 0; i < n; i++)
    {
        max_value = max(max_value,arr[i]);
        
    }
    
    max_value++;
    
    vector<int> bkt[k];
    
    for(int i = 0; i < n; i++)
    {
        int bi = (k * arr[i]) / max_value;
        bkt[bi].push_back(arr[i]);
        
    }
    
    
    for(int i = 0; i < k; i++)
    {
        sort(bkt[i].begin(),bkt[i].end());
        
    }
    
    
    int index = 0;
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < bkt[i].size(); j++)
        {
            arr[index++] = bkt[i][j];
        }
    }
    
    
}


int main()
{
     int arr[] = { 30,40,10,80,5,12,70 }; 
    int n = sizeof(arr) / sizeof(arr[0]); int k=4;
    bucketSort(arr, n, k); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}
