// Trie Insert and Search 
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