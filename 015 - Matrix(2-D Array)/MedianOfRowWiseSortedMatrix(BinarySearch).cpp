class Solution{   
public:
    int median(vector<vector<int>> &arr, int r, int c){
      int min = arr[0][0], max = arr[0][c - 1];
      
      for(int i = 1; i < r; i++)
      {
          if(arr[i][0] < min)
          {
              min = arr[i][0];
              
          }
          
          if(arr[i][c - 1] > max)
          {
              max = arr[i][c - 1];
              
          }
      }
      
      
      int medPos = (r * c + 1) / 2;
      while(min < max)
      {
          int mid = (min + max) / 2;
          int midPos = 0;
          for(int i = 0; i < r; i++)
          {
              midPos += upper_bound(arr[i].begin(),arr[i].end(),mid) - arr[i].begin();
              
             
          }
          
           if(midPos < medPos)
              {
                  min = mid + 1;
                  
              }
              else{
                  max = mid;
                  
              }
          
      }
      
      return max;
  
    }
};
