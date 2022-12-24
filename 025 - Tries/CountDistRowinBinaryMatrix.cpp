// Count Disnct Row in Binary Matrix 
// Time Complexity O(mn) and Aux Space O(mn)
#include <iostream>
using namespace std;
#define ROW 4
#define COL 3
 bool matrix[ROW][COL] = {{1,0,0},
                            {1,1,1},
                            {1,0,0},
                            {0,1,0}
                  };
                            

struct TrieNode
{
    TrieNode *child[2];
    TrieNode()
    {
        child[0] = NULL;
        child[1] = NULL;
    }
};


bool insert(TrieNode *root,int row)
{
    TrieNode *curr = root;
    bool flag = false;
    
    for(int i = 0; i < COL; i++)
    {
        int index = matrix[row][i];
        if(curr -> child[index] == NULL)
        {
            curr -> child[index] = new TrieNode();
            flag = true;
        }
        curr = curr -> child[index];
        
    }
    
    return flag;
}

int countDist()
{
    TrieNode *root = new TrieNode();
    int res = 0;
    
    for(int row = 0; row < ROW; row++)
    {
        if(insert(root,row)) res++;
        
    }
    return res;
    
}




int main() {

                                
          cout << countDist() << endl;
          
            
  

    return 0;
}