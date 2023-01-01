// lower_bound in On Vector
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v = {10,20,20,35,45,80};
    auto it = lower_bound(v.begin(),v.end(),25);
    
    cout << *it << endl;
    // Returns The Index
    cout << it - v.begin()<< endl; // O/P :- 3
   

    return 0;
}


// O/P :- 35