// Check For Binary Search Tree#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left;
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

bool isBST(Node* root,int min, int max)  
{  
  if (root == NULL)  
    return true;  
      
  return ( root->key>min && root->key<max && 
            isBST(root->left,min,root->key) && isBST(root->right,root->key,max));  
}

int main() {
	
	Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);  
      
    if(isBST(root,INT_MIN,INT_MAX))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";  
          
    return 0;  
	
}


// GFG Solution 
class Solution
{
    public:
    
    bool validateBST(Node *root,int min, int max)
    {
        if(root == NULL) return true;
      
         return (root -> data > min && root -> data < max && validateBST(root -> left,min,root -> data) && validateBST(root -> right,root -> data,max));
    };
    
    
    bool isBST(Node* root) 
    {
       return validateBST(root,INT_MIN,INT_MAX);
    }
};


// LeetCode Solutionclass Solution
 {
public:
    bool isValidBSThelper(TreeNode *root,long min, long max)
    {
      if (root == NULL)  
      return true;  
      
       return ( root->val > min && root->val< max && 
           isValidBSThelper(root->left,min,root->val) && 
           isValidBSThelper(root->right,root->val,max));  
    }
    bool isValidBST(TreeNode* root) {
       
       
        return isValidBSThelper(root,LONG_MIN,LONG_MAX);

    }
};