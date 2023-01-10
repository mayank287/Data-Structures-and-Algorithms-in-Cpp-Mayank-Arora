// Burn a Binary Tree From leaf Node
//User function Template for C++

// Here Pair stores two values int = distance and left stores the value of bool 
class Solution {
  public:
   int ans = 0;
   pair<int,bool> dfs(Node *root,int target)
   {
       if(root == NULL) return {0,false};
       if(root -> data == target)
       {
           ans = max(dfs(root -> left,target).first,dfs(root-> right,target).first);
           return {1,true};
       }
       
       pair<int,bool> left = dfs(root -> left,target),right = dfs(root -> right,target);
       if(left.second)
       {
           ans = max(ans,right.first + left.first);
           return {left.first + 1,true};
       }
       else if(right.second)
       {
           ans = max(ans,right.first + left.first);
           return {right.first + 1,true};
       }
       else{
           return {max(left.first,right.first) + 1,false};
       }
   }
   
   
    int minTime(Node* root, int target) 
    {
       dfs(root,target);
       return ans;
       
    }
};