// Array Rotate or Nor In Time of o(n) and o(1) space

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
      for(int i=1;i<n;i++){
          if(arr[i] < arr[i-1]){return false;}
         
      }
      return true;
    }
}



