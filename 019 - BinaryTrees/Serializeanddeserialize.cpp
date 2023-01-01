// Serialize and Deserialize Thr Binary Tree 
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

const int EMPTY=-1;
void serialize(Node *root, vector<int> &arr){
   if(root==NULL){
       arr.push_back(EMPTY);
       return;
   }
    arr.push_back(root->key);
    serialize(root->left,arr);
    serialize(root->right,arr);
}

Node *deSerialize(vector<int> &arr, int &index){
    if(index==arr.size())
        return NULL;
    int val=arr[index];
    index++;
    if(val==EMPTY)return NULL;
    Node *root=new Node(val);
    root->left=deSerialize(arr,index);
    root->right=deSerialize(arr,index);
    return root;
}

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
	
	vector<int> arr;
	serialize(root,arr);
	for (int x : arr) {
	    cout<<x<<" ";
	}
	cout<<endl;
	int index=0;
	Node *root_new=deSerialize(arr,index);
	inorder(root_new);
}



// GFG Solution class Solution


{
    public:
    
    void serializehelper(Node *root,vector<int>&ans)
    {
       if(root == NULL){
           ans.push_back(-1);
           return; 
       }
       
       ans.push_back(root -> data);
       serializehelper(root -> left,ans);
       
       serializehelper(root -> right,ans);
       
       
    }
    
    
    vector<int> serialize(Node *root) 
    {
       vector<int> ans;
      if(root == NULL) return ans;
       
       serializehelper(root,ans);
       return ans;
       
       
    }
    
    Node *deSerializehelper(vector<int> &ans, int &index)
    {
        if(index == ans.size()) return NULL;
        
        int value = ans[index];
        index++;
        
        if(value == -1) return NULL;
        Node *root = new Node(value);
        
        root -> left = deSerializehelper(ans,index);
        root -> right = deSerializehelper(ans,index);
        
      return root; 
        }
    Node * deSerialize(vector<int> &A)
    {  int index = 0;
       return deSerializehelper(A,index);
    }

};