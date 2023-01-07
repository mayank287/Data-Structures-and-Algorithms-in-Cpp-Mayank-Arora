#include <iostream>
using namespace std;

void printsubsets(string str, string curr = "",int index =0){
    if(index == str.length())
{


    cout << curr << " ";
    return;
}    
    
    printsubsets(str,curr,index+1);
    printsubsets(str,curr+str[index],index+1);
    
    
}





int main() {
   printsubsets("ma");

    return 0;
}

// Subsets on Numbers GFG Solution 
class Solution
{  
    private:
    void solve(vector<int> nums,vector<int>output,int index,vector<vector<int>>& ans)
    {
        if(index >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        
        solve(nums,output,index + 1,ans);
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index + 1,ans);
        
        
    }
 
    public:
    vector<vector<int> > subsets(vector<int>& nums)
    {
       vector<vector<int>> ans;
       vector<int> output;
       int index = 0;
       solve(nums,output,index,ans);
       sort(ans.begin(),ans.end());
       return ans;
       
      
    }
};  