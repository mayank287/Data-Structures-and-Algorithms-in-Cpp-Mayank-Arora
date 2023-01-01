// First k Frequent Element  and Who Comes First 
// Top K Frequent Element in Linear Time 

#include<bits/stdc++.h>
using namespace std;

void printKFrequent(int arr[],int n,int k){
     unordered_map<int,int> m;
      for(int i = 0; i < n; i++)
      {
       m[arr[i]]++;
       
      }
      
     vector<int> freq[n + 1 ];
     for(int i = 0; i < n; i++){
         int f  = m[arr[i]];
         if(f != -1){
             freq[f].push_back(arr[i]);
             m[arr[i]] = -1;
             
         }
     }
        
        
   int count = 0;
   for(int i =n; i>=0;i--){
       for(auto x :freq[i]){
           cout << x <<  " ";
           count++;
           if(count == k){
               return;
               
           }
       }
   }
   
}

int main()
{
    int arr[] = {6,7,6,7,6,7,2,2,2,4,4,4,5};
     int N = sizeof(arr) / sizeof(arr[0]);
    int K = 4;
    printKFrequent(arr, N, K);
 
    return 0;
}


// Time Complexity :- o(n)
// Auxillary Space : -o(n)