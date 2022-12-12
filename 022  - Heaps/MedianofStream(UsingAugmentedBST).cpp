// Median of Stream (Augmented BST) Method
// Time Complexity O(n * height of tree)

#include <bits/stdc++.h>
using namespace std;

struct Node {
	double data;
	Node *left, *right;
	int lCount;
	Node(double x)
	{
		data = x;
		left = right = NULL;
		lCount = 0;
	}
};

Node* insert(Node* root, double x)
{
	if (root == NULL)
		return new Node(x);

	if (x < root->data) {
		root->left = insert(root->left, x);
		root->lCount++;
	}

	else if (x > root->data)
		root->right = insert(root->right, x);
	return root;
}

Node* kthSmallest(Node* root, int k)
{
    if (root == NULL)
        return NULL;
 
    int count = root->lCount + 1;
    if (count == k)
        return root;
 
    if (count > k)
        return kthSmallest(root->left, k);
 
    return kthSmallest(root->right, k - count);
}

int main()
{
	Node* root = NULL;
	double keys[] = { 25, 7, 10, 15, 20};
    int size=0;
    
	for (double x : keys){
	    size++;
		root = insert(root, x);
		double res;
	    if(size%2!=0){
	        res=(kthSmallest(root,(size/2)+1))->data;
	    }else{
	        res=(((kthSmallest(root,(size/2)+1))->data)+((kthSmallest(root,(size/2)))->data))/2;
	    }
	    cout<<res<<" ";
	}
	
	return 0;
}
