// Radix Sort
// Time Complexity theta(d * (n + b)) where b = base 10
// Space Complexity theta(n + b)
void countingSort(int arr[], int n, int exp)
{ 
    
    int count[10] = {0};
  
    
    for(int i = 0; i < n; i++)
    {   
        count[(arr[i] / exp) % 10]++;
        
    }
    
    
    for(int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
        
    }
    
    int output[n];
    for(int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
        
    }
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = output[i];
        
    }
    
    
    
    
}



void radixSort(int arr[], int n) 
{ 
   int max = arr[0];
   for(int i = 0; i < n; i++)
   {
       if(arr[i] > max)
       {
            max = arr[i];
            
       }
      
    }
  
  for(int exp = 1; max/exp > 0; exp *= 10)    
     {
         countingSort(arr,n,exp);
         
     }
   
} 