// Fill on vector  c++;
#include <iostream>
#include<vector>


using namespace std;


int main()
{
    
vector<int> v = {10,20,30,40,20};
fill(v.begin(),v.end(),5);
for( int x : v){
    cout << x << endl;
    
}
  
    return 0; 
}



