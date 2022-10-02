// We can also use the accumulate() function with a user-defined comparator function to perform specific operation like product as shown below:
#include<iostream>
#include<numeric>
#include <vector>

using namespace std;
  int myFun(int x, int y)
    {
        return x*y;
        
    };

int main()
{
    vector<int> v = {10,20,30};
  
    int init_res = 2;
    cout << accumulate(v.begin(),v.end(),init_res,myFun ); 
   

    return 0;
}

// O/P :- 12000 (10*30*20*2)