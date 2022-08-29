// Time complexity thetha(n) time and auxillary space complexity thetha(n0)

#include <iostream>

using namespace std;

int getSum(int n){
    if(n==0){
        return 0;
    }
    
    
    return n+getSum(n-1);
   
}

int main()
{
  int n;
  cin >> n;
 cout <<  getSum(n)  <<endl;;

    return 0;
}
