// Searching The Element Using Upper Bound 
#include <iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main()
{
    
    int x = 400;
    
    vector<int> v ={10,20,20,30,40};
    auto it = upper_bound(v.begin(),v.end(),x);
    if(it != v.begin()  && (*(it - 1) == x)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
        
    }

    return 0; 
}
