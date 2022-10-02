// Accumulate In C++ STL Programme -1 
#include<iostream>
#include<numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10,20,30};
    int init_sum = 40;
    cout << accumulate(v.begin(),v.end(),init_sum);
   
       
   
   

    return 0;
}

// O/P = 100;
