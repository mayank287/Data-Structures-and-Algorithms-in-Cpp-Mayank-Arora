// Binary Search on Vector
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main()
{
    
vector<int> v = {10,20,30,40,50};
int x = 506;


if(binary_search(v.begin(),v.end(),x) == true){
    cout << "Found" << endl;
    
}
else{
cout << "Not Found" << endl;
}
   
  
    return 0; 
}
