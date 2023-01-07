// String Permutations
class Solution
{
	public:
	void helper(string str,int index,vector<string>&ans)
	{
	    if(index >= str.length())
	    {
	        if(find(ans.begin(),ans.end(),str) == ans.end())
	        {
	            
	        ans.push_back(str);
	         return;
	        }
	    }
	    
	    for(int j = index; j < str.length(); j++)
	    {
	        swap(str[index],str[j]);
	        helper(str,index + 1,ans);
	        swap(str[index],str[j]);
	    }
	    
	}
	 
		vector<string>find_permutation(string s)
		{
		    vector<string> ans;
		    int index = 0;
		    helper(s,index,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}
};
