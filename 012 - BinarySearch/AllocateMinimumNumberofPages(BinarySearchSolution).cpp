// Allocate Minimum Number of Pages 
#include <bits/stdc++.h> 
using namespace std; 

bool isFeasible(int arr[],int n,int k, int ans){
    int req=1,sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>ans){
            req++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return (req<=k);
}

int minPages(int arr[],int n, int k){
    if(k > n) return -1; // Condition to point
    int sum=0,mx=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx,high=sum,res=0;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(isFeasible(arr,n,k,mid)){
            res=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return res;
}

int main() 
{
    int arr[]={12,34,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    
    cout<<minPages(arr,n,k);
} 


// GFG Solution 
//User function template in C++

class Solution 
{
    public:
    bool isFeasible(int arr[], int n,int k,int ans)
    {
        int req = 1, sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(sum + arr[i] > ans)
            {
                req++;
                sum = arr[i];
            }
            else{
                sum += arr[i];
            }
        }
        
        return (req <= k);
    }
    int findPages(int arr[], int n, int k) 
    {
     if(n < k) return -1;
        
        int sum = 0,mx = 0;
        for(int i = 0; i < n; i++)
          {
              sum += arr[i];
              mx = max(mx,arr[i]);
          }
          
          int low = mx,high = sum, res = 0;
          
          while(low <= high)
          {
              int mid = (low + high) / 2;
              if(isFeasible(arr,n,k,mid))
              {
                  res = mid;
                  high = mid - 1;
              }
              else{
                  low = mid + 1;
              }
          }
        return res;
    } 
};