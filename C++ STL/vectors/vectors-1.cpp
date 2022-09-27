// Vectors First Program
 
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    for(int i = 0; i<v.size();i++){
        cout <<  v[i] << " ";
    }
    
     cout << v.at(2) << endl;
    // This Checks The limit boundary means this throws the error if i try to access 
    // the element out of range for example v.at(4) but v[4] not check the error boundary check and 
    // retuns 0
     
    
    return 0;
}
