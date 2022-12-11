// Make_heap Function - 1

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
   vector<int> v = {15,6,7,12,30};
     // Max Heap
     make_heap(v.begin(),v.end());
     // Min Heap
     make_heap(v.begin(),v.end(),greater<int> ());
     cout << v.front() << endl;
     

    return 0;
}
