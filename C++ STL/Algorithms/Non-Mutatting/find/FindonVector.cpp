// Find () Algorithms In C++ STL on Vectors
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   vector<int> v = {5,10,7,10,20};
   auto it = find(v.begin(),v.end(),58);
   
   if(it == v.end()){
       cout << "Not Found" << endl;
       
   }
   else{
       cout << "Found at " << (it - v.begin());
       
   }
   
   

    return 0;
}
