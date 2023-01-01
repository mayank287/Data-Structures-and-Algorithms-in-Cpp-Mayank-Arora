// Reverse on Vectors in C++ STL

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   vector<int> v = {10,20,30};
   reverse(v.begin(),v.end());
   for(int x : v) {
       cout << x << " ";
       
   };
    
    return 0;
}
 

 // For Reversing Particular Element
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   vector<int> v = {10,20,30,40,50};
   reverse(v.begin() + 1 ,v.end());
   for(int x : v) {
       cout << x << " ";
       
   };
    
    return 0;
}
 