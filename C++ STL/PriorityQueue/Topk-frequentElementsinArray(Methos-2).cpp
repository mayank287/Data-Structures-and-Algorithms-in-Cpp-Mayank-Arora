// Method 2 of Top Frequent Elements
#include <iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
struct myCmp{
    bool operator() (pair<int,int> p1, pair<int,int> p2)
    {
    
        
        if(p1.second == p2.second){
            return p1.first >  p2.first;
        }
        
        return p1.second <  p2.second;
        
    }
 };



void printkmostFrq(int arr[], int n,int k){
  unordered_map<int,int> m;
  for(int i = 0; i < n; i++){
      m[arr[i]]++;
  }
  
  priority_queue<pair<int,int>,vector<pair<int,int>>, myCmp> pq(m.begin(),m.end());
  
  for(int i = 0; i < k; i++){
      cout << pq.top().first << " ";
      pq.pop();
      
  }
  
};


int main(){
     int arr[] = {3, 1, 4 , 4, 5, 2, 6, 1};
    printkmostFrq(arr,8,3);
    

    return 0;
}

// GFG Solution
class Solution {
  public:
  struct myCmp{
    bool operator() (pair<int,int> p1, pair<int,int> p2)
    {
    
        
        if(p1.second == p2.second){
            return p1.first <  p2.first;
        }
        
        return p1.second <  p2.second;
        
    }
 };
 
    vector<int> topK(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
    for(int i = 0; i < nums.size(); i++){
      m[nums[i]]++;
     }
  
     priority_queue<pair<int,int>,vector<pair<int,int>>, myCmp> pq(m.begin(),m.end());
  
    for(int i = 0; i < k; i++){
     ans.push_back(pq.top().first);
      pq.pop();
      
           }
      return ans;
    }
};

// Time Complexity :- o(n) + o(n) + o(klogn) 
// Overall Time Complexity o(klogn)  