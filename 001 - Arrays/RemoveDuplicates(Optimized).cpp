// Remove Duplicates in o(n) time and o(1) space 


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res =1;
        for(int i =1; i<nums.size(); i++){
            if(nums[i] != nums[res-1]){
                
            
                nums[res] = nums[i];
                res++;
            }
            
        }
        
        
        return res;
        
        
    }
};