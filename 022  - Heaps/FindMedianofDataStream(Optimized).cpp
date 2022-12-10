// Find Median of Data Stream
// Time Complexity O(nlogn)



#include <bits/stdc++.h>
using namespace std;

void printMedians(int arr[],int n){
    priority_queue<int> s;
    priority_queue<int, vector<int>,greater<int>> g;
    s.push(arr[0]);
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++){
        int x=arr[i];
        if(s.size()>g.size())
        {
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else g.push(x);
            cout<<(s.top()+g.top())/2.0<<" ";
        }else{
            if(x<=s.top()){
                s.push(x);
            }else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout<<s.top()<<" ";
        }
    }
}

int main()
{
	int keys[] = { 12, 15, 10, 5, 8, 7, 16};
    
    printMedians(keys,7);
	
	return 0;
}


// GFG Solution

class Solution
{
   // s- maxheap and g = minheap
   priority_queue<double> s;
   priority_queue<double,vector<double>,greater<int>> g;
   
   
    
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(s.size() == 0 || s.top() > x)
        {
            s.push(x);
            
        }
        else{
            g.push(x);
            
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
       if(s.size() > g.size() + 1)
       {
           g.push(s.top());
           s.pop();
       }
       else if(g.size() > s.size()){
           s.push(g.top());
           g.pop();
           
       }
    }
    
    //Function to return Median.
    double getMedian()
    {
      double med;
      if(g.size() == s.size())
      {
          med = (g.top() + s.top()) / 2.0;
          
      }
      else{
          med = s.top();
          
      }
      return med;
      
    }
    
};