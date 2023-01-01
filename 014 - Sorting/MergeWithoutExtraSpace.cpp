// Merge Without Extra Space 
class Solution{
    public:
       
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            
            int i = n - 1, j = 0;
            while(i >= 0 && j < m)
            {
                
                if(arr1[i] > arr2[j])
                {
                    swap(arr1[i],arr2[j]);
                }
                
                i--;
                j++;
            }
         
          sort(arr1,arr1 + n);
          sort(arr2,arr2 + m);
          
        } 
};


// LeetCode Solution 
 void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
     
       int i = n - 1, j = m - 1, k = m + n - 1;
        
        while(i >=0 && j >= 0)
        {
            
            if(nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
                
            }
            else{
                nums1[k--] = nums2[j--];
                
            }
            
        }
        
        
        while(j>=0)
            nums1[k--]=nums2[j--];   
        
        
    }