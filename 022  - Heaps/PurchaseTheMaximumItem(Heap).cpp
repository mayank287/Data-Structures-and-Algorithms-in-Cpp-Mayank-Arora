// Purchase The Maximum(Maximize Toys GFG)
// Time Complexity O(n) + O(res * logn)
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int n=7;
    int cost[n]={1, 12, 5, 111, 200, 1000, 10};
    int sum=50;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    
    int res=0;
    for(int i=0;i<n;i++)
        pq.push(cost[i]);
    
    for(int i=0;i<n;i++){
        if(pq.top()<=sum){
            sum-=pq.top();
            pq.pop();
            res++;
        }else{
            break;
        }
    }
    cout<<res;
    return 0;
} 
