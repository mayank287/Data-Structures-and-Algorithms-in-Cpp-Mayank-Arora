// Binary Tree To CDLL
// Time Complexity O(n) and Aux O(height of Binary Tree)

class Solution
{
  public:
    Node *prev = NULL;
     Node * bToDLL(Node *root)
    {
       if(root == NULL) return root;
       Node *head = bToDLL(root -> left);
       if(prev == NULL)
       {
           head = root;
           
       }
       else{
           root -> left = prev;
           prev -> right = root;
       }
       prev = root;
       bToDLL(root -> right);
       return head;
       
    }
    
    Node *bTreeToCList(Node *root)
    {
     Node *head = bToDLL(root);
     head -> left = prev;
     prev -> right = head;
     return head;
      
    }
};