// Merge Overlapping Intervals
#include <iostream>
#include<algorithm>

using namespace std;


struct Interval{
    int start, end;
    
};




bool myComp(Interval a, Interval b)
{
    return a.start < b.start;
    
};


void mergeInterval(Interval arr[], int n)
{
    sort(arr,arr + n, myComp);
    
    int res = 0;
    for(int i = 0; i < n; i++)
    {
       if(arr[res].end >= arr[i].start)
       {
           arr[res].end = max(arr[res].end,arr[i].end);
           arr[res].start = min(arr[res].start,arr[i].start);
           
       }
       else{
           res++;
           arr[res] = arr[i]; 
           }
    }
    
    
    for(int i = 0; i <= res; i++)
    {
        cout << "[" << arr[i].start << "," << arr[i].end << "]";
        
    }
    
    
}

int main()
{
      Interval arr[] ={{1,3},{2,4},{6,8},{9,10}};
      int n= sizeof(arr)/sizeof(arr[0]);
      mergeInterval(arr,n);
    
    return 0;
}


// GFG Solution 
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
      
       
       int n = arr.size();
       if(n == 0) return ans;
       
        sort(arr.begin(),arr.end());
       
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[res][1] > arr[i][0])
            {
                arr[res][1] = max(arr[res][1],arr[i][1]);
                arr[res][0] = min(arr[res][0],arr[i][0]);
                
            }
            else{
                res++;
                arr[res] = arr[i];
                
            }
        }
       
       
       for(int i = 0; i <= res; i++)
       {
           int res1 = arr[i][0];
           int res2 = arr[i][1];
            
          
           ans.push_back({res1,res2});
           
         
           
       }
      
      return ans;
      
      
    }
};