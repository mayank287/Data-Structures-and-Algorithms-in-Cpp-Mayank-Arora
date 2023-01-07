// Triplet Sum
// GFG Solution 
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int x)
    {
        sort(arr,arr + n);
        for(int i = 0; i < n; i++)
        {
            int left = i + 1;
            int right = n - 1;
            while(left < right)
            {
                if(arr[i] + arr[left] + arr[right] == x) return true;
                else if(arr[i] + arr[left] + arr[right] > x) right--;
                else left++;
            }
        }
        
        return false;
    }

};


// LeetCode Solution 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n < 3) return ans;

        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;
            while(left < right)
            {
                if(nums[i] + nums[left] + nums[right] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                    ans.push_back(temp);
                }
                else if(nums[i] + nums[left] + nums[right] > 0) right--;
                else left++;
            }
        }
        return ans;
    }
};