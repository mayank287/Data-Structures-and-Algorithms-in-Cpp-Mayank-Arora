#include <iostream>
#include<vector>
using namespace std;



vector<int> oddAppearing(int arr[], int n)
{
    vector<int> ans;
    int XOR = 0, res1 = 0 , res2 = 0;
    for(int i = 0; i <n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    
        int sn = XOR & ~(XOR - 1 );
    for(int i = 0;i < n; i++)
    {
        if((arr[i] & sn) != 0)
        {
            res1 = res1 ^ arr[i];
            

        }
        else{
            res2 = res2 ^ arr[i];
            
        }
    }
    
    ans.push_back(res1);
    ans.push_back(res2);
    
    
    return ans;
    
}



int main()
{
   int arr[] = {4 ,2 ,4 ,5 ,2, 3 ,3 ,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   
     vector<int> tell = oddAppearing(arr,n);
    for(auto i : tell)
    {
        cout << i << " ";
        
    }
     
    return 0;
}
