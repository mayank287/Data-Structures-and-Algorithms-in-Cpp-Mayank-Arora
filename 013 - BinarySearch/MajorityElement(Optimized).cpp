// Majority Element 
// optimized 
// Time Complexity o(n)
// Moores Voting Algo
 
int count = 1, res = 0;
      
      for(int i = 0; i < n; i++)
      {
          if(arr[res] == arr[i])
          {
              count++;
              
          }
          else{
              count--;
              
          }
          
          if(count == 0)
          {
              count  = 1;
              res = i;
              
          }
          
      }
      
      count = 0;
      for(int i = 0; i < n; i++)
      {
          if(arr[res] == arr[i])
          {
              count++;
              
          }
        
      }
      
      if(count <= n/2)
      {
          return -1;
          
      }
      
      
    return arr[res];
    
       