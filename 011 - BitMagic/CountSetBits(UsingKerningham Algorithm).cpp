// Count Set Bits in Number Using Kerningham Algorithm
// Time Complexity theta(set Bit Count)

class Solution {
  public:
    int setBits(int n) {
        int res  = 0;
        while( n > 0)
        {
            n = (n & (n - 1 ));
            res++;
            
        }  
        return res;
        
    }
};