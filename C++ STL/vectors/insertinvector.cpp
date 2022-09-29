// insert in vector 
#include <iostream>
#include<vector>


using namespace std;

int main()
{
  vector<int> v= {10,5,20,30};
  // insert at given pos in vector
auto it = v.insert(v.begin(),100);
 for(int x:v){
     cout << x << " ";
 }


// insert a pos ahead in vector
 v.insert(v.begin() + 3,100);
for(int x:v){
    cout << x <<  endl;
}

// to insert how many time at particular place in vector

 v.insert(v.begin(),3,100);
for(int x:v){
    cout << x << endl;
}


// copy elements of vector 1 to vector 2
vector <int> v2;
v2.insert(v2.begin(),v.begin(),v.begin() + 2);
for(int x:v2){
    cout << x << " ";
}

return 0;
}



