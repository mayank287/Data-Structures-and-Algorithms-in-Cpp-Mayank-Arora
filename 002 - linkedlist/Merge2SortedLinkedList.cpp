// Merge 2 Sorted Linked List 
// Time Complexity O(m + n) and Aux Space O(1)
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *sortedMerge(Node *a,Node *b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    Node *head=NULL,*tail=NULL;
    if(a->data<=b->data){
        head=tail=a;a=a->next;
    }
    else{
        head=tail=b;b=b->next;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<=b->data){
            tail->next=a;tail=a;a=a->next;
        }
        else{
            tail->next=b;tail=b;b=b->next;
        }
    }
    if(a==NULL){tail->next=b;}
    else{
        tail->next=a;
    }
    return head;
}

int main() 
{ 
	Node *a=new Node(5);
	a->next=new Node(10);
	a->next->next=new Node(15);
	a -> next -> next -> next = new Node(40);
	Node *b=new Node(2);
	b->next=new Node(3);
	b -> next -> next = new Node(20);
	printlist(sortedMerge(a,b));
	return 0;
} 
