// InOrder traversal of Binary Tree
// Time Complexity O(n)
// Space Complexity O(Height of Tree)
#include <bits/stdc++.h>
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

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}  

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	inorder(root);
}



// GFG Solution 
class Solution {
  public:
     void in(Node *root, vector<int> &ans)
     {
       if(root != NULL)
       {
           in(root -> left,ans);
           ans.push_back(root -> data);
           in(root -> right,ans);
           
       }
         
         
     }
      
      
    vector<int> inOrder(Node* root) {
      vector<int> ans;
     

      in(root,ans);
      return ans;
      
    }
};