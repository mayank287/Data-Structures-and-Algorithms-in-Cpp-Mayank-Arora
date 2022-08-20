// Remove Duplicates From Array Not Optimized o(n) time and space complexity 


class Solution{
public:
    int remove_duplicate(int a[],int n){
    int temp[n];
    temp[0] = a[0];
    int res = 1;
    for(int i = 1; i< n;i++){
        if(temp[res-1] != a[i]){
            temp[res] = a[i];
            res++;
        }
        
        
        
    }
    
    for(int i = 0; i<n;i++){
       a[i] =  temp[i];
    }
    return res;
    }
    
    
};