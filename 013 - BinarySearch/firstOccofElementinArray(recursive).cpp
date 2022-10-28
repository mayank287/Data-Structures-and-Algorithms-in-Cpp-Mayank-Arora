// First  Occurence of  Element in Sorted Array Recursive
// Time Complexity o(logn)

 #include <iostream>
using namespace std;


int firstoccHelper(int arr[], int low, int high, int target)
{
    if(low > high)
    {
        return -1;
        
    }
    
    int mid = (low + high) / 2;
    if(arr[mid] < target){
        return firstoccHelper(arr,mid + 1, high, target);
        
        
    }
    else if(arr[mid] > target)
    {
        return firstoccHelper(arr,low,mid - 1, target);
        
    }
    else {
        if(mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
            
        }
        else{
            return firstoccHelper(arr,low,mid - 1, target);
        }
    }
    
  
    
}



int firstocc(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    
    
    
    return firstoccHelper(arr,low,high,k);
    
}
    

int main()
{
    
    int arr[] = {5,10,10,15,20,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;
    
    
    cout << firstocc(arr,n,k);
    
    
    

    return 0;
}
