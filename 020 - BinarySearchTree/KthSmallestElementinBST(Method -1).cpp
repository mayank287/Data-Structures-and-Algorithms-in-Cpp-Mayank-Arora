// Kth Smallest Element in Binary Search Tree#include <bits/stdc++.h>
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


void printKth(Node *root, int k, int &count){
    if(root!=NULL){
        printKth(root->left,k,count);
        count++;
        if(count==k)
            {cout<<root->key; return;}
        printKth(root->right,k,count);
    }
} 

int main() {
	
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int k=3;
	int count=0;
	cout<<"Kth Smallest: ";
	printKth(root,k,count);
	
	return 0;
}


// GFG Solution
class Solution {
  public:
    void helper(Node *root, int k, int &ans, int &count)
    {
        if(root != NULL)
        {
            helper(root -> left,k,ans,count);
            count++;
            if(count == k)
            {
                ans = root -> data;
                return;
                
            }
            helper(root -> right,k,ans,count);
            
        }
        
        
    }
    int KthSmallestElement(Node *root, int k) {
       int ans = INT_MIN;
       int count = 0;
       
       helper(root,k,ans,count);
       return ans == INT_MIN ? -1 : ans;
       
    }
};

// LeetCode Solution
class Solution {
public:
    void helper(TreeNode *root,int k, int &ans,int &count)
    {
        if(root != NULL)
        {
            helper(root -> left,k,ans,count);
            count++;
            if(count == k)
            {
                ans = root -> val;
                return;
            }

            helper(root -> right,k,ans,count);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1, count = 0;
        helper(root,k,ans,count);
        return ans == -1 ? -1 : ans;

    }
};