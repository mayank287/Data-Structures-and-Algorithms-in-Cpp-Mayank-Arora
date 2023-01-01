// Top K Frequent Element in Linear Time 

#include<bits/stdc++.h>
using namespace std;

void printKFrequent(int arr[], int n, int k){
    unordered_map<int,int> m;
    for(int i =0; i<n; i++){
        m[arr[i]]++;
    }
    
    vector<vector<int>> freq(n+1);
    for(auto x : m){
        freq[x.second].push_back(x.first);
        
    }
    
    int count = 0;
    for(int i = n; i >=0; i--){
        for(auto x : freq[i]){
            cout << x << " ";
            count++;
            if(count==k){
                return;
                
            }
        }
    }
    
    
}

int main()
{
    int arr[] = {6,7,6,7,6,7,4,4,2,2,5};
     int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;
    

      
      
      
   printKFrequent(arr, N, K);
 
    return 0;
}
