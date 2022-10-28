// last  Occurence of  Element in Sorted Array Recursive
// Time Complexity o(logn)

 #include <iostream>
using namespace std;


int lastoccHelper(int arr[], int low, int high, int target, int n)
{
    if(low > high)
    {
        return -1;
        
    }
    
    int mid = (low + high) / 2;
    if(arr[mid] < target){
        return lastoccHelper(arr,mid + 1, high, target,n);
        
        
    }
    else if(arr[mid] > target)
    {
        return lastoccHelper(arr,low,mid - 1, target,n);
        
    }
    else {
        if(mid == n - 1  || arr[mid] != arr[mid + 1])
        {
            return mid;
            
        }
        else{
            return lastoccHelper(arr,mid + 1,high, target,n);
        }
    }
    
  
    
}



int lastocc(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    
    
    
    return lastoccHelper(arr,low,high,k,n);
    
}
    

int main()
{
    
    int arr[] = {5,10,10,10,15,20,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;
    
    
    cout << lastocc(arr,n,k);
    
    
    

    return 0;
}