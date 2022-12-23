// Trie Delete Operation 
#include<iostream>
using namespace std;

const int ALPHABET_SIZE  = 26;

struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    
    bool isEndofWord;
};

struct TrieNode *getNode(void)
{
    struct TrieNode *pNode = new TrieNode;
    pNode -> isEndofWord = false;
    
    for(int i = 0; i < ALPHABET_SIZE; i++)
    {
        pNode -> children[i] = NULL;
        
    }
    return pNode;
};


void insert(struct TrieNode *root,string key)
{
    struct TrieNode *pCrawl = root;
    int n = key.length();
    
    for(int i = 0; i < n; i++)
    {
        int index = key[i] - 'a';
        if(!pCrawl -> children[index])
        {
            pCrawl -> children[index] = getNode();
        }
        pCrawl = pCrawl -> children[index];
    }
    pCrawl -> isEndofWord = true;
    
    
}

bool search(struct TrieNode *root,string key)
{
    struct TrieNode *pCrawl = root;
    int n = key.length();
    
    for(int i = 0; i < n; i++)
    {
        int index = key[i] - 'a';
        if(!pCrawl -> children[index]) return false;
         pCrawl = pCrawl -> children[index];
         
    }
    return (pCrawl != NULL && pCrawl -> isEndofWord);
    
}

bool isEmpty(TrieNode *root)
{
    for(int i = 0; i < ALPHABET_SIZE; i++)
    {
        if(root -> children[i]) return false;
    }
    return true;
}

TrieNode * helperemove(TrieNode *root,string key,int i)
{
    if(!root) return NULL;
    if(i == key.size())
    {
        if(root -> isEndofWord) 
          root -> isEndofWord = false;
          
        if(isEmpty(root))  
         {
             delete(root);
             root = NULL;
         } 
          return root;
          
    }
    
    
    int index = key[i] - 'a';
    root -> children[index] =
    helperemove(root -> children[index],key,i + 1);
    
    if(isEmpty(root) && root -> isEndofWord ==  false)
    {
        delete(root);
        root = NULL;
    }
    return root;
    
    
}
TrieNode *remove(TrieNode *root,string str)
{
    return helperemove(root,str,0);
}
int main()
{
    string key[] = {"mayank","arora","parth","arora"};
    int n = sizeof(key)/sizeof(key[0]);
    TrieNode *root = getNode();
    
    for(int i = 0; i < n; i++)
    {
        insert(root,key[i]);
    }
     if(search(root,"mayank"))
    {
        cout << "Match Found" << endl;
    }
    else{
        cout << "No Found" << endl;
    }
    
    remove(root,"mayank");
    
    if(search(root,"mayank"))
    {
        cout << "Match Found" << endl;
    }
    else{
        cout << "No Found" << endl;
    }
    
    return 0;
    
}