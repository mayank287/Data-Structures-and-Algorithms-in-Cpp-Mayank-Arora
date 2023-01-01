// Build Segment Tree
// Time Complexity theta(n)
#include <iostream>
using namespace std;

int buildSegTree(int start,int end,int i, int arr[], int tree[])
{
    if(start == end)
    {
        tree[i] = arr[start];
        return arr[start];
     }
    
    int mid = (start + end) / 2;
     tree[i] = buildSegTree(start,mid,2 * i + 1,arr,tree) +
               buildSegTree(mid + 1,end,2 * i + 2,arr,tree);
               
               
    return tree[i];
  
    
}


int main() {
  int arr[] = {10,20,30,40};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  int tree[4 * n];
  cout << buildSegTree(0,n - 1, 0,arr,tree) << endl;
   
    return 0;
}