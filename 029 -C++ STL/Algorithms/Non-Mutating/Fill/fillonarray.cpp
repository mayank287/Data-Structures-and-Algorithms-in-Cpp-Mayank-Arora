// Fill On Array in C++ STL
#include <iostream>
#include<vector>


using namespace std;


int main()
{
    
vector<int> v = {10,20,30,40,20};
fill(v.begin(),v.end(),5);
for( int x : v){
    cout << x << endl;
    
}
  
    return 0; 
}

// We can Do Same on List and String (List Not support begin() + 1 or  -1 )

// Time Complexity is o(n)