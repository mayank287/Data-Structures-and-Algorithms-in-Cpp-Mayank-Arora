// Max and Min On Vector
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    
    vector<int> v1 = {10,20,50,450,40,25,14};
    vector<int> v2 = {10,20,50,450,40,25,14};



   auto it1 = max_element(v1.begin(),v1.end());
   auto it2 = min_element(v2.begin(),v2.end());
   cout << *it1 << " " << *it2 << endl;
   

  
    return 0; 
}
