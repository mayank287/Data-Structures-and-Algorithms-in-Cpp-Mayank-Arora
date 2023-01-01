// Count() on Vector
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    
vector<int> v = {30,20,5,10,6,10,10,20,20,20};
cout << count(v.begin(),v.end(),20) << endl;

 
    return 0; 
}


// O/P :- 4
