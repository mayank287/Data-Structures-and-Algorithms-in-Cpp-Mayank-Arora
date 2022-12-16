// InterSection of 2 UnSorted Array(Naive)
// Time Complexity O(m * (m + n))
#include<iostream>
#include<vector>
using namespace std;


int getIntersection(vector<int> arr1,vector<int> arr2)
{
    int m = arr1.size();
    int n = arr2.size();
    
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        bool flag = false;
        for(int j = 0; j < i - 1; j++)
        {
            if(arr1[j] == arr1[i])
            {
                flag = true;
            }
        }
        
        if(flag) continue;
        
        for(int j = 0; j < n; j++)
        {
            if(arr1[i] == arr2[j])
            {
                ans++;
                break;
            }
        }
    }
    return ans;
    
    
}

int main()
{
    
    vector<int> arr1 = {10,15,20,15,30,30,5};
    vector<int> arr2 = {30,5,30,80};
    
    cout << getIntersection(arr1,arr2);
    return 0;
    
    
    
    
}
