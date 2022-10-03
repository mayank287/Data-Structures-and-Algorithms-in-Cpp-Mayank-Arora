// UpperBound Function
#include <iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main()
{
    vector<int> v ={10,20,20,30,40};
     auto it = lower_bound(v.begin(),v.end(),30);
     cout << it - v.begin() << endl;
    

    it = upper_bound(v.begin(),v.end(),30);
   cout << it - v.begin() << endl

    return 0; 
}
