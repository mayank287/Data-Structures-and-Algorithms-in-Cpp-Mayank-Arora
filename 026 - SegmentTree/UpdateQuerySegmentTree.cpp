// Update Query on Segment Tree
// Time Complexity O(logn)
// Most Time Take DS to Debug :) (:
#include <iostream>
using namespace std;

int buildSegmentTree(int start, int end, int index, int arr[], int tree[])
{
	if(start == end)
	{
		tree[index] = arr[start];
		return arr[start];
	}

	int mid = (start + end) / 2;

	tree[index] = buildSegmentTree(start, mid, 2 * index + 1, arr, tree)
		       + buildSegmentTree(mid + 1, end, 2 * index + 2, arr, tree);

	return tree[index];
}
int getSum(int queryStart, int queryend, int start, int end, int index, int tree[])
{
	if(end < queryStart || start > queryend)
		return 0;
	if(queryStart <= start &&  queryend >= end)
		return tree[index];

	int mid = (start + end) / 2;

	return getSum(queryStart, queryend, start, mid, 2 * index + 1, tree)
		   + getSum(queryStart, queryend, mid + 1, end, 2 * index + 2, tree);
}
void update(int start, int end, int newIndex, int index, int diff, int tree[])
{
    if(newIndex < start || newIndex > end) 
        return;
        
    tree[index] = tree[index] + diff;
    
    if(end > start)
    {
        int mid = (start + end) / 2;
        
        update(start, mid, newIndex, 2 * index + 1, diff, tree);
        update(mid + 1, end, newIndex, 2 * index + 2, diff, tree);
        
    }
}
	
int main() {
	     int arr[] = {1,2,3,4,5,6};
         int n = sizeof(arr)/sizeof(arr[0]);
   
          int tree[4 * n];
          buildSegmentTree(0, n - 1, 0, arr, tree);
     
   
          cout <<   getSum(0,5,0,n - 1,0,tree) << endl;
          update(0,n - 1,3,0,2,tree);
          cout <<   getSum(0,5,0,n - 1,0,tree) << endl;
          update(0,n - 1,5,0,60,tree);
          cout <<   getSum(4,5,0,n - 1,0,tree) << endl;
		
	return 0;
}