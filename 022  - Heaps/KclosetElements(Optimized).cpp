// K Closet Elements Optimized
// Time Complexity O(nlogk)
#include <bits/stdc++.h>
using namespace std;

void printKClosest(int arr[], int n, int k, int x)
{
     priority_queue<pair<int, int> > pq; 
    for (int i = 0; i < k; i++) 
        pq.push({ abs(arr[i] - x), i }); 
  
    for (int i = k; i < n; i++) { 
        int diff = abs(arr[i] - x); 
        if ( pq.top().first>diff ){
        pq.pop(); 
        pq.push({ diff, i }); 
        }
    } 
   
    while (pq.empty() == false) { 
        cout << arr[pq.top().second] << " "; 
        pq.pop(); 
    } 
}

int main()
{

	int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	printKClosest(arr,size,k,x);

	return 0;
}


// LeetCode Solution 
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int> ans;
        priority_queue<pair<int,int>> pq;

        for(int i = 0; i < k; i++)
        {
            pq.push({abs(arr[i] - x),i});
        }

        for(int i = k; i < arr.size(); i++)
        {
            int diff = abs(arr[i] - x);
            if(pq.top().first > diff)
            {
                pq.pop();
                pq.push({diff,i});
            }
        }
      

       while(!pq.empty())
       {
           ans.push_back(arr[pq.top().second]);
           pq.pop();
       }

       sort(ans.begin(),ans.end());

       return ans;  
    }
};