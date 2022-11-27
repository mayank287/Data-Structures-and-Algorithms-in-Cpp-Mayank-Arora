// Iterative Inorder Traversal of Binary Tree
// Time Complexity O(n) and Aux Space O(height of Tree)

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
       stack<Node *> st;
       vector<int> ans;
       Node *curr = root;
       while(curr != NULL || st.empty() == false)
       {
           while(curr != NULL)
           {
               st.push(curr);
               curr = curr -> left;
               
           }
           
           curr = st.top();
           st.pop();
           ans.push_back(curr -> data);
           curr = curr -> right;
           
           
       }
       
       return ans;
       
       
    }
};