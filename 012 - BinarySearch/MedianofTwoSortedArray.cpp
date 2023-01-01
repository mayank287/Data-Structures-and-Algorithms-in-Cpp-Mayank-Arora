// Median of Two Sorted Array`
// Time Complexity o(logn1)
class Solution{
    public:
    double MedianOfArrays(vector<int>& a1, vector<int>& a2)
    {
        int n1 = a1.size();
        int n2 = a2.size();
        
         if(n1 > n2) return MedianOfArrays(a2,a1);
        
        int low = 0, high = n1;
        while(low <= high)
        {
            
            int i1 = (low + high) / 2;
            int i2 = (n1 + n2 + 1) / 2 - i1;
            
            int min1 = (i1 == n1) ? INT_MAX  : a1[i1];
            int max1 = (i1 == 0) ? INT_MIN : a1[i1 - 1];
            int min2 = (i2 == n2) ? INT_MAX : a2[i2];
            int max2 = (i2 == 0) ? INT_MIN : a2[i2 - 1];
            
            
            
            if(max1 <=  min2 && max2 <= min1)
            {
                
                if((n1 + n2) % 2 == 0 )
                {
                    
                    return(max(max1,max2) + min(min1,min2)) / 2.0;
                    
                }
                else{
                    return max(max1,max2);
                    
                }
                
                
            }
            else if(max1 > min2)
            {
                high = i1 - 1;
                
            }
            else{
                low = i1 + 1;
                
            }
                        
                    }
        
            return 0.0;
        
    }
};