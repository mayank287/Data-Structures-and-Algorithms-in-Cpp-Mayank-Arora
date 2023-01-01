// Max Guests Soltion o(n2)
#include <bits/stdc++.h>

using namespace std;

int maxGuests(int arr[], int dep[], int n){
    int res = 0;
    for(int i = 0; i < n; i++  ){
        int curr = 1;
        for(int j = i + 1; j< n ;j++){
            if((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >=  arr[i] && arr[i] <= dep[i])) curr++;
            
        }
        
        res = max(res,curr);
        
    }
    
    
    
 return res;
 
    
    
    
}


int main()
{
    int arr[] = {900,600,700};
    int dep[] = {1000,800,730};
     
    cout << maxGuests(arr,dep,3);
    

    return 0;
}


// O/P : 2