// Count on Strings
#include <iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    
list<int> l = {10,5,10,7,10,20};

cout << count(l.begin(),l.end(),10) << endl;

   
    
  
    return 0; 
}


// Time Complexity o(n)