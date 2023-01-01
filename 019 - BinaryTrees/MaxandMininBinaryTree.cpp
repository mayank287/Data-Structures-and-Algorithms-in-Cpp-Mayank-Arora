// Max and Min in Binary Tree
// Time Complexity O(n) and Space Complexity O(h)

class Solution
{
public:
    int findMax(Node *root)
    {
       if(root == NULL)
       {
           return INT_MIN;
       }else{
           return max(root -> data,max(findMax(root -> left),findMax(root -> right)));
       }
    }
    int findMin(Node *root)
    {
      if(root == NULL)
      {
          return INT_MAX;
      }
      else
      {
          return min(root -> data,min(findMin(root -> left),findMin(root -> right)));
          
      }
    }
};