// Clear Function  in vector c++ stl
#include <iostream>
#include<vector>


using namespace std;

int main()
{
vector<int> v = {10,5,20,15};
v.clear();
cout << v.size() << endl;


if(v.empty() == true){
    cout << "true" << endl;
}
else{
    cout << "false" << endl;
    
}
return 0;
}