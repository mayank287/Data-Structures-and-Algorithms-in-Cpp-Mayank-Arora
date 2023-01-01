// Rotate on Vector C++ STL
#include <iostream>
#include<vector>
#include<algorithm> 

using namespace std;


int main()
{
    
vector<int> v = {10,20,30,40,20};
rotate(v.begin(),v.begin() + 2 , v.end());


for(int x : v){
    cout << x <<  " ";
    
} 
    return 0; 
}


// Note: The rotate() function can be used with other containers also which support forward iterators, like List, Deque, String etc.

// Time Complexity: It works in O(N) time complexity, as it traverses the complete container to rotate it.
