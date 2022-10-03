// is_permutation on vector 
#include <iostream>
#include<algorithm>
#include<vector> 
using namespace std;

#define be begin()
#define en end()
#define vec vector


int main()
{
   vector<int> v1 = {10,20,30,40,50,60,70,80,90,100};
   vector<int> v2 ={100,90,80,70,60,50,40,30,20,10,45};
   
   if(is_permutation(v1.be,v1.en,v2.be))
   {
       cout << "Yes" << endl;
       
   }
   else{
       cout << "No" << endl;
   }
   

    return 0; 
}


// O/P :- Yes
