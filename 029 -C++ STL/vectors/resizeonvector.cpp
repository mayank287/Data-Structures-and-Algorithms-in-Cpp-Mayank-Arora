// Resize Function on vector in c++ stl#include <iostream>
#include <iostream>
#include<vector>


using namespace std;

int main()
{
vector<int> v = {10,5,20,15};

// For Resize at Particular size
v.resize(3);
for(int x:v){
    cout << x << " ";
    
}

// For Resize at increase size at default size at 0
v.resize(5);
for(int x:v){
    cout << x << " "; 
}

// For Resize at increase size and give default element

v.resize(8,200);
for(int x:v){
    cout  << x <<  " ";
    
}



return 0;


}