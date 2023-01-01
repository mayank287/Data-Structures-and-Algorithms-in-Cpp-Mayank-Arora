// Merge k Sorted Array (Super Naive)
// Time Complexity O(nklognk) n = maximum number of elements in array k = number of input arrays
 
#include <bits/stdc++.h>
using namespace std;

vector<int> mergeKArrays(vector<vector<int> > arr) 
{ 
    vector<int> res; 
      
    for(vector<int> v: arr) 
    { 
        for(int x:v) 
            res.push_back(x); 
    } 
      
    
    sort(res.begin(),res.end());

    return res;
}

int main()
{

	vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
  
    vector<int> res = mergeKArrays(arr); 
  
    cout << "Merged array is " << endl; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
}
