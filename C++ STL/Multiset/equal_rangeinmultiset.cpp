// Equal Range In Multiset in C++
// It Returns The Pair of lowerbound value and upper bound value
#include <iostream>
#include<set>

using namespace std;

int main()
{
  multiset<int> s;
s.insert(20);
s.insert(10);
s.insert(10);
s.insert(40);

  
  
  auto it = s.equal_range(20);
  
  cout<< *it.first << " " << *it.second <<  endl;
  

    return 0;
}

