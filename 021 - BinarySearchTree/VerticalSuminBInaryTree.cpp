// vectical Sum in Binary Tree#include <bits/stdc++.h>
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

void vSumR(Node *root,int hd,map<int,int> &mp){
    if(root==NULL)return;
    vSumR(root->left,hd-1,mp);
    mp[hd]+=root->key;
    vSumR(root->right,hd+1,mp);
}    

void vSum(Node *root){
    map<int,int> mp;
    vSumR(root,0,mp);
    for(auto sum: mp)
        cout<<sum.second<<" ";
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(50);  
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    
    vSum(root);
          
    return 0;  
	
}



// GFG Solution 
class Solution{
  public:
    void Vsum(Node *root,int hd,map<int,int> &mp)
    {
        if(root == NULL) return;
        Vsum(root -> left, hd - 1, mp);
        mp[hd] += root -> data;
        Vsum(root -> right,hd + 1,mp);
        
    }
    vector <int> verticalSum(Node *root) {
       vector<int> ans;
       map<int,int> mp;
       Vsum(root,0,mp);
       for(auto x : mp)
       {
           ans.push_back(x.second);
           
       }
       
       return ans;
       
    }
};