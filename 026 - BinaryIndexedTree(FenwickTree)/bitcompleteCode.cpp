// Time Complexity theta(logn)
#include <iostream>
using namespace std;

int getSum(int BITree[],int index)
{
    int sum = 0;
    index = index + 1;
    
    while(index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
    
}

void updateBITHelper(int BITree[], int n,int index,int val)
{

    index = index + 1;
    while(index <= n)
    {
        BITree[index] += val;
        index += index & (-index);
        
    }
}

void update(int BITree[], int n, int index,int val, int arr[])
{
    int diff = val - arr[index];
    
    updateBITHelper(BITree,n,index,diff);
    
}

int rangeQuery(int low, int high,int BITree[])
{
    
    return getSum(BITree,high) - getSum(BITree,low - 1);
}


int *buildfenwickTree(int arr[], int n)
{
    int *BITree = new int[n + 1];
    for(int i = 0; i < n; i++)
    {
        BITree[i] = 0;
    }
    
    for(int i = 0; i < n; i++)
    {
        updateBITHelper(BITree,n,i,arr[i]);
        
    }
    
    return BITree;
    
}



int main() {
    int arr[] = {10,20,30,40,50,60,80,90,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *BITree = buildfenwickTree(arr,n);
    cout << getSum(BITree,1) << endl;
    cout << rangeQuery(1,2,BITree) << endl;
    update(BITree,n,1,30,arr);
    cout << getSum(BITree,1) << endl;
    cout << rangeQuery(1,2,BITree) << endl;
    
    
    

    return 0;
}
