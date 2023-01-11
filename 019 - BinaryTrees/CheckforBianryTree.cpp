// Check For Bianry Tree 
    

class Solution{
public:    
    bool isCompleteBT(Node* root){
        bool end = false;
        queue<Node *>q;
        q.push(root);
        while(!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if(temp == NULL)
            {
                end = true;
            }
            else {
                if(end)
                {
                    return false;
                }
            
            q.push(temp -> left);
            q.push(temp -> right);
            }
        }
        return true;
    }
};