// Ceiling on Right Side of Array 
// Time Complexity o(n2)
#include<bits/stdc++.h>
using namespace std;
 

void printCeiling(int arr[], int n){
    for(int i= 0 ; i <n; i++){
        int diff= INT_MAX;
        for(int j = i + 1; j  < n; j++ ){
            if(arr[j] >= arr[i]){
                diff = min(diff,arr[j]- arr[i]);
                
            }
        }
        
        if(diff == INT_MAX){
            cout << -1  << " ";
            
        }else{
            cout << arr[i] + diff << " ";
        }
    }
}

int main()
{
    int arr[] = {5,20,98,56,23,58,10};
    int n = sizeof(arr)/sizeof(arr[0]);
   printCeiling(arr,n);
   

    return 0;
}


// Some Changes
#include<bits/stdc++.h>
using namespace std;
 

void printCeiling(int arr[], int n){  
    set<int> s;
    int ans[n];
    for(int i = n - 1 ; i >= 0; i--){
        auto it = s.lower_bound(arr[i]);
        if(it == s.end()){
            ans[i] = -1;
        }
        else{
            ans[i] = *it;
            s.insert(arr[i]);
            
        }
    }
    
    for(int i = n - 1; i >= 0; i--){
        cout << ans[i] << " ";
        
    }
    
}