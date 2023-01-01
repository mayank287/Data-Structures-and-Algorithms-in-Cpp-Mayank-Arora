class Solution{
public:
    int sumOfDigits(int N){
      if(N<10){
          return N;
      }
      
     return sumOfDigits(N/10) + N%10;
    }
};