// Iterative PreOrder Traversal
// Time Complexity O(n) and Space o(n)
class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int> ans;
       if(root == NULL)  ans.push_back(-1);
       stack<Node *> st;
       st.push(root);
       while(st.empty() == false)
       {
           Node *curr = st.top();
           ans.push_back(curr -> data);
           st.pop();
           if(curr -> right != NULL) {
               st.push(curr -> right);
               
           }
           
           if(curr -> left != NULL)
           {
               st.push(curr -> left);
               
           }
       }
       return ans;
    }
};