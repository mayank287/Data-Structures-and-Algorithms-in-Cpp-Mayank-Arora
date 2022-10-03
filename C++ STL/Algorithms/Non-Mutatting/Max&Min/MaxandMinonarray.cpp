// Max and Min Element on Array
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    
   int arr[] = {5,6,20,90,4,8};
   cout << *max_element(arr,arr+6) << endl;
   cout << *min_element(arr,arr+6) << endl;
   

  
    return 0; 
}
