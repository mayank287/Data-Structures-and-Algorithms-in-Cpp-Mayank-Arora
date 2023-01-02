// Max Length of Pair Chain 
// LeetCode Solution 
// Time Complexity O(nlogn)
class Solution {
public:
    bool static compare(vector<int> p1,vector<int> p2)
    {
        return p1[1] <  p2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(),pairs.end(),compare);
        int ans= 1, prev = pairs[0][1];

        for(int i = 1; i < n; i++)
        {
            if(pairs[i][0] > prev)
            {
                prev = pairs[i][1];
                ans++;
            }
        }

        return ans;


    }
};

// GFG Solution 
