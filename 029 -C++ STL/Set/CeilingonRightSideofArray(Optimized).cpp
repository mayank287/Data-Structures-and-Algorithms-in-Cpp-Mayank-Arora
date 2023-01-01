// Ceiling on Right Side of Array 
// Time Complexity o(nlogn)
// Auxiliary space Complexiy o(n)
#include<bits/stdc++.h>
using namespace std;
 

void printCeiling(int arr[], int n){  
    set<int> s;
    vector<int> v;
    for(int i = n - 1; i >= 0; i--){
     auto it = s.lower_bound(arr[i]);
     if(it == s.end()){
         v.push_back(-1);
         
     }
     else{
         v.push_back(*it);
         
     }
         s.insert(arr[i]);
     
     
    }
    
    
    for(int i = n - 1 ; i >= 0; i--){
        cout << v[i] << " ";
        
    }
    
}

int main()
{
    int arr[] = { 100, 50 , 30 , 60, 55, 32, 1000 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printCeiling(arr, n);
    return 0;
}