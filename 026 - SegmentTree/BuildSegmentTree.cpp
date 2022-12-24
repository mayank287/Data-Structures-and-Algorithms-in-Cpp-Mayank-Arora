// Build Segment Tree
#include <iostream>
using namespace std;

int buildSegTree(int ss,int se,int si, int arr[], int tree[])
{
    if(ss == se)
    {
        tree[si] = arr[ss];
        return arr[ss];
     }
    
    int mid = (ss + se) / 2;
     tree[si] = buildSegTree(ss,mid,2 * si + 1,arr,tree) +
               buildSegTree(mid + 1,se,2 * si + 2,arr,tree);
               
               
    return tree[si];
  
    
}


int main() {
  int arr[] = {10,20,30,40};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  int tree[4 * n];
  cout << buildSegTree(0,n - 1, 0,arr,tree) << endl;
   
    return 0;
}