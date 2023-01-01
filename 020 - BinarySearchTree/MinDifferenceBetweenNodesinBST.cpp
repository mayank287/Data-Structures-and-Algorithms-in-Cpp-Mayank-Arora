// Min Difference Between Nodes in Binary Search Tree
 int minDiff(Node *root, int K)
    {
      
        int res=INT_MAX;
       while(root!=NULL){
           if(root->data==K){return 0;}
           if(root->data<K){
               res=min(res,abs(K - root -> data));
               root=root->right;
           }
           else{
               res=min(res,abs(K - root -> data));
               root=root->left;
           }
       }
       return res;
       
      
       
    }
};