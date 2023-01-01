// How Vectors Implemented internally 
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    cout << v.capacity() <<  endl;
    
   
  return 0;
   
}


// Process of vector Implement Internally 
// 1.internally use dynamically allocated arrays only
// 2. if current allocated space becomes full, do following a
// a. create a new layer space of double size
// b. copy  elements from old space to new space
// c. free old space  

