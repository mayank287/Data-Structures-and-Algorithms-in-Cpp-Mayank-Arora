// Binary Tree Top View 
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

void topView(Node *root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.empty()==false){
        auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        if(mp.find(hd)==mp.end())
            mp[hd]=(curr->key);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});
    }
    for(auto x:mp){
        cout<<x.second<<" ";
    }
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
    topView(root);
          
    return 0;  
	
}



// GFG Solution 
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {  
       vector<int> ans;    
       map<int,int> mp;
       queue<pair<Node *, int>> q;
       q.push({root,0});
       while(!q.empty())
       {
           auto p = q.front();
           Node *curr = p.first;
           int hd = p.second;
           if(mp.find(hd) == mp.end())
           {
               mp[hd] = (curr -> data);
           }
           q.pop();
           
           if(curr -> left != NULL)
           {
               q.push({curr -> left, hd - 1});
           }
           
           if(curr -> right != NULL)
           {
               q.push({curr -> right, hd + 1});
           }
           
       }
       for(auto x : mp)
       {
           ans.push_back(x.second);
       }
       return ans;
    }

};
