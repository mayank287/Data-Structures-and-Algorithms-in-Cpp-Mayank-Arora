//  Program to subtract all values of vector from a given initial value. To do this we can pass an additional parameter to the accumulate function "minus<int>" as shown in the program below.
#include<iostream>
#include<numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10,20,30};
    int init_sum = 100;
    cout << accumulate(v.begin(),v.end(),init_sum,minus<int>() ); 
   
       
   
   

    return 0;
}

// O/P :- 40 (100-10 = 90 ,90-20 = 70,70-30 =40)