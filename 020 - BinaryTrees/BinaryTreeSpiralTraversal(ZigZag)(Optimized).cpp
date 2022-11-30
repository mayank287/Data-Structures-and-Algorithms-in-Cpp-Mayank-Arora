// Binary Tree Zig Zag Traversal (Optimized)
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

void printSpiral(Node *root){
    if (root == NULL) 
        return;  

    stack<Node*> s1;  
    stack<Node*> s2;  
  
    s1.push(root); 
  
    while (!s1.empty() || !s2.empty()) { 
        while (!s1.empty()) { 
            Node* temp = s1.top(); 
            s1.pop(); 
            cout << temp->key << " "; 
  
            if (temp->left) 
                s2.push(temp->left); 
            if (temp->right) 
                s2.push(temp->right); 
        } 
        cout << endl;
        
        while (!s2.empty()) { 
            Node* temp = s2.top(); 
            s2.pop(); 
            cout << temp->key << " "; 
  
            if (temp->right) 
                s1.push(temp->right); 
            if (temp->left) 
                s1.push(temp->left); 
        } 
        
        cout << endl;
        
    } 
}  

int main() {
	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	printSpiral(root);
}


// LeetCode Solution 

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
   vector<vector<int>> ans;
   
   if (root == NULL) 
        return ans;  

    stack<TreeNode*> s1;  
    stack<TreeNode*> s2;  
    s1.push(root); 
  
    while (!s1.empty() || !s2.empty()) {
        vector<int> v;
        if(!s1.empty())
        {
            while (!s1.empty()) { 
            TreeNode* temp = s1.top(); 
            s1.pop(); 
            v.push_back(temp -> val);
            
             if (temp->left) 
                s2.push(temp->left); 
            if (temp->right) 
                s2.push(temp->right); 
        } 
       
        }
      else{
         while (!s2.empty()) { 
            TreeNode* temp = s2.top(); 
            s2.pop(); 
            v.push_back(temp -> val);
            
  
            if (temp->right) 
                s1.push(temp->right); 
            if (temp->left) 
                s1.push(temp->left); 
            } 
         }
           ans.push_back(v);
    } 
  return ans;
      
      
 }   
};


// GFG Solution 
vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    if(root == NULL) return ans;
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);
    
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            ans.push_back(temp -> data);
            
            
            if(temp -> right)
            {
                s2.push(temp -> right);
                
            }
            
            if(temp -> left)
            {
                s2.push(temp -> left);
                
            }
        }
        
        
        while(!s2.empty())
        {
            Node *temp = s2.top();
            s2.pop();
            
            ans.push_back(temp -> data);
            
            
            if(temp -> left)
            {
                s1.push(temp -> left);
                
            }
            
            
            if(temp -> right)
            {
                s1.push(temp -> right);
            }
        
        }
        
    }
    return ans;
    
    
}