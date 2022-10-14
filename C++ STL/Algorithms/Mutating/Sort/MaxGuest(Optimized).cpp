// Max Guest in Room 
// Time Complexity o(nlogn )
#include <bits/stdc++.h>
using namespace std;

int maxGuest(int arr[], int dep[], int n){
    
    sort(arr,arr + n);
    sort(dep,dep + n);
    int i = 1, j = 0, curr = 1, res = 1;
    while(i  < n && j  < n)
    {
        
    if(arr[i] <= dep[j]){
        curr++;
        i++;
    }
    else{
        curr--;
        j++;
        
    }
    res = max(curr,res);
    
    }
    
    return res;
    
}





int main()
{
   int arr[] = {900,940,950,1100,1500,1800};
   int dep[] = {910,1200,1120,1130,1900,2000};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout << maxGuest(arr,dep,n) << endl;
   

    return 0;
}
