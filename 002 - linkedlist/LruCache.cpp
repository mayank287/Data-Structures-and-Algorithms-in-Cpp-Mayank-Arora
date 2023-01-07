// Design LRU Cache

class LRUCache {
private:
struct Node
{
    int key;
    int value;
    Node *prev;
    Node *next;
    Node(int key1,int value1)
    {
        key = key1;
        value = value1;
    }
};

unordered_map<int,Node*> map1;
int capacity;
Node *head = new Node(0,0);
Node *tail = new Node(0,0);

public:
    LRUCache(int cap) {
        capacity = cap;
        head -> next = tail;
        tail -> prev = head;
    }
    
    int get(int key) {
        if(map1.find(key) != map1.end())
        {
          Node *existingNode = map1[key];
          int value = existingNode -> value;
          deleteNode(existingNode);
          addNode(key,value);
          map1.erase(key);
          map1[key] = head -> next;
          return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(map1.find(key) != map1.end())
        {
          Node *existingNode = map1[key];
          map1.erase(key);
          deleteNode(existingNode);
        }

        if(map1.size() == capacity)
        {
          map1.erase(tail -> prev -> key);
          deleteNode(tail -> prev);
        }
        addNode(key,value);
        map1[key] = head -> next;
    }


    void addNode(int key, int value)
    {
      Node *createNode = new Node(key,value);
      createNode -> next = head -> next;
      head -> next -> prev = createNode;
      head -> next = createNode;
      createNode -> prev = head;
      
    }

    void deleteNode(Node *deletedNode)
    {
      deletedNode -> prev -> next = deletedNode -> next;
      deletedNode -> next -> prev = deletedNode -> prev;
      delete(deletedNode);
    }
};

