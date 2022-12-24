// Update Query on Segment Tree
#include<iostream>
using namespace std;

int buildendgmentTree(int start,int end,int index,int arr[], int tree[])
{
    if(start == end)
    {
        tree[index] = arr[start];
        return arr[start];
    }
    int mid = (start + end) / 2;
    tree[index] = buildendgmentTree(start,mid,2 * index + 1,arr,tree) +
               buildendgmentTree(mid + 1,end,2 * index + 2,arr,tree);
               
    return tree[index];
    
}


int getSum(int querystart,int queryend, int start, int end,int index,int tree[])
{
    if(end < querystart || start > queryend) return  0;
    if(querystart <= start && queryend >= end) return tree[index];
    int mid = (start + end) / 2;
    
    return getSum(querystart,queryend,start,mid,2 * index + 1,tree) + getSum(querystart,queryend,mid + 1,end,2 * index + 2,tree);
}

int main()
{
    int arr[] = {10,20,30,40};
    int n = 4;
    int tree[4 * n];
    
    buildendgmentTree(0, n - 1,0,arr,tree);
    
    int testCases;
    cout << "Enter The Number of Nodes" << endl;
    cin >> testCases;
    
    while(testCases--)
    {
        int x,y;
        cin >> x >> y;
        cout <<  getSum(x,y,0,n-1,0,tree) << endl;
        
    }

    
    return 0;
}
