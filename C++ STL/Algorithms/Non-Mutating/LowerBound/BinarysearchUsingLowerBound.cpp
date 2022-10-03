// Binary Search Using Lower_bound
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    
     int arr[] = {10,20,20,20,30,40};
       
      auto it = lower_bound(arr,arr+6,30);
      if(it ==  (arr + 6) || *it != 30)
      {
          cout << "Not Found" << endl;
          
      }
      else{
          cout << "Found" << endl;
      }
       
   
   

    return 0;
}
