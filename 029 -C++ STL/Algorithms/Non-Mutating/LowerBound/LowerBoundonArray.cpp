// lower_bound on array 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    
     int arr[] = {10,20,20,20,30,40};
       
      auto it = lower_bound(arr,arr+6,25);
      cout << *it << endl;
      // Returns Index
       cout << it - arr << endl; // O/P :-4
      
       
   
   

    return 0;
}
// O/P :- 30