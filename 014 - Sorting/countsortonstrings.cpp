class Solution{
    public:
    
    string countSort(string arr){
      int n = arr.length();
      
      int count[27] = {0};
  
      
      for(int i = 0; i < n; i++)
      {
          count[int(arr[i]) - 97]++;
      }
      
      for(int i = 1; i < 27; i++)
      {
          count[i] = count[i - 1] + count[i];
          
      }
      
      int output[n] = {0};
      for(int j = n - 1; j >= 0; j--)
      {
          output[count[int(arr[j]) - 97] - 1 ] = arr[j];
          count[int(arr[j] - 97)]--;
      }
      
      for(int i = 0; i < n; i++)
      {
          arr[i] = output[i];
          
      }
      
      return arr;
      
    }
};